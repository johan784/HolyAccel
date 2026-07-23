"""Controller/processing-element boundary verification for ``bnn_core``."""

import contextlib
from asyncio import CancelledError

import cocotb
from cocotb.triggers import FallingEdge, RisingEdge, ReadOnly, Timer

from verification.golden_model import bnn_score
from verification.utils import BUSY, FETCH, IDLE, READY, WAIT, core_debug, reset_core, safe_int, start_clock


async def synchronous_bram(dut, input_words, weight_words, base_in, base_wt):
    """Model BRAM with exactly one clock of read latency."""
    while True:
        # A request is captured at a rising edge; drive its response midway
        # through the cycle so it is sampled on the following rising edge.
        await FallingEdge(dut.clk)
        input_index = (safe_int(dut.inp_bram_addr) - base_in) // 4
        weight_index = (safe_int(dut.wt_bram_addr) - base_wt) // 4
        dut.inp_bram_dout.value = input_words[input_index] if 0 <= input_index < len(input_words) else 0
        dut.wt_bram_dout.value = weight_words[weight_index] if 0 <= weight_index < len(weight_words) else 0


async def start_and_trace(dut, input_words, weight_words, base_in=0x100, base_wt=0x280):
    """Run one request and return stable, half-cycle controller observations."""
    bram = cocotb.start_soon(synchronous_bram(dut, input_words, weight_words, base_in, base_wt))
    # Let the responder arm its first RisingEdge before issuing the request.
    await Timer(1, unit="ns")
    dut.in_ptr.value = base_in
    dut.wt_ptr.value = base_wt
    dut.start.value = 1
    await FallingEdge(dut.clk)
    await ReadOnly()
    assert safe_int(dut.clear_accumulator) == 1, "clear_accumulator was not asserted with start"
    await RisingEdge(dut.clk)
    dut.start.value = 0

    trace = []
    for _ in range(100):
        await FallingEdge(dut.clk)
        await ReadOnly()
        trace.append({
            "state": safe_int(dut.state),
            "enable": safe_int(dut.enable),
            "clear": safe_int(dut.clear_accumulator),
            "word_idx": safe_int(dut.word_idx),
            "in_addr": safe_int(dut.inp_bram_addr),
            "wt_addr": safe_int(dut.wt_bram_addr),
            "in_reg": safe_int(dut.inputs_reg),
            "wt_reg": safe_int(dut.weights_reg),
            "accumulator": safe_int(dut.pe.accumulator),
            "busy": safe_int(dut.busy),
            "done": safe_int(dut.done),
            "result": safe_int(dut.result),
        })
        if trace[-1]["done"]:
            bram.cancel()
            with contextlib.suppress(CancelledError):
                await bram
            return trace
    bram.cancel()
    raise AssertionError(f"bnn_core timed out: {core_debug(dut)}")


@cocotb.test()
async def test_controller_pe_protocol_and_result(dut):
    """Check all eight controller-to-PE transactions and synchronous BRAM phases."""
    await start_clock(dut)
    await reset_core(dut)
    inputs = [0xFFFF0000, 0xAAAAAAAA, 0x12345678, 0, 1, 0xDEADBEEF, 0x55555555, 0xFFFFFFFF]
    weights = [0xFFFF0000, 0x55555555, 0x12345678, 0xFFFFFFFF, 1, 0x01234567, 0xAAAAAAAA, 0]
    base_in, base_wt = 0x100, 0x280
    trace = await start_and_trace(dut, inputs, weights, base_in, base_wt)

    enabled = [sample for sample in trace if sample["enable"]]
    assert len(enabled) == 8, f"expected 8 PE enables, got {len(enabled)}: {trace}"
    assert [sample["word_idx"] for sample in enabled] == list(range(8)), f"word_idx off by one: {enabled}"
    assert [sample["in_addr"] for sample in enabled] == [base_in + 4 * i for i in range(8)]
    assert [sample["wt_addr"] for sample in enabled] == [base_wt + 4 * i for i in range(8)]
    assert [(sample["in_reg"], sample["wt_reg"]) for sample in enabled] == list(zip(inputs, weights)), (
        f"each fetched pair must reach the PE once: {enabled}"
    )
    assert all(not sample["clear"] for sample in trace), "clear_accumulator reasserted after inference start"
    assert all(sample["state"] == BUSY for sample in enabled), "enable asserted outside BUSY"
    assert sum(sample["state"] == WAIT for sample in trace) == 8, "missing/extra WAIT phases"
    assert sum(sample["state"] == FETCH for sample in trace) == 8, "missing/extra FETCH phases"
    assert all(sample["busy"] for sample in trace[:-1]), "busy deasserted before completion"
    assert trace[-1]["state"] == IDLE and trace[-1]["done"] == 1 and trace[-1]["busy"] == 0
    assert trace[-2]["state"] == READY and trace[-2]["done"] == 0, "done asserted before READY completed"
    assert trace[-1]["result"] == trace[-1]["accumulator"] == bnn_score(inputs, weights)


@cocotb.test()
async def test_back_to_back_and_busy_start_is_ignored(dut):
    """A request during BUSY must not restart or corrupt the active inference."""
    await start_clock(dut)
    await reset_core(dut)
    first_inputs = [0xFFFFFFFF] * 8
    first_weights = [0xFFFFFFFF] * 8
    second_inputs = [0] * 8
    second_weights = [0xFFFFFFFF] * 8

    # Inject a one-cycle start pulse after the first request is already busy.
    task = cocotb.start_soon(start_and_trace(dut, first_inputs, first_weights))
    for _ in range(20):
        await FallingEdge(dut.clk)
        if safe_int(dut.state) == BUSY:
            dut.start.value = 1
            await RisingEdge(dut.clk)
            dut.start.value = 0
            break
    first_trace = await task
    assert first_trace[-1]["result"] == bnn_score(first_inputs, first_weights)

    # Once idle, a new start must clear the old PE sum and complete normally.
    await RisingEdge(dut.clk)  # Leave the ReadOnly phase used by trace collection.
    second_trace = await start_and_trace(dut, second_inputs, second_weights)
    assert second_trace[-1]["result"] == bnn_score(second_inputs, second_weights)
    assert second_trace[-1]["result"] != first_trace[-1]["result"]
