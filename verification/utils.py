"""Shared cocotb helpers for the MiniSoC BNN verification suite."""

import contextlib
from dataclasses import dataclass
from asyncio import CancelledError

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import ClockCycles, RisingEdge


TOTAL_WORDS = 8

IDLE = 0
FETCH = 1
BUSY = 2
READY = 3
WAIT = 4

BNN_BASE = 0x3000_0000
BNN_CTRL = BNN_BASE + 0x00
BNN_STATUS = BNN_BASE + 0x04
BNN_INPUT_PTR = BNN_BASE + 0x08
BNN_WEIGHT_PTR = BNN_BASE + 0x0C
BNN_RESULT = BNN_BASE + 0x10

LED_PASS = 0xFF
LED_FAIL = 0x01


def safe_int(handle, default=0) -> int:
    """Convert a cocotb handle value to int, tolerating X/Z during reset."""
    try:
        return int(handle.value)
    except (ValueError, TypeError):
        return default


async def start_clock(dut, period_ns=10):
    """Start the DUT clock."""
    cocotb.start_soon(Clock(dut.clk, period_ns, unit="ns").start())
    await RisingEdge(dut.clk)


async def reset_dut(dut, cycles=5):
    """Apply the active-high top-level reset used by this project."""
    dut.rst.value = 1
    await ClockCycles(dut.clk, cycles)
    dut.rst.value = 0
    await RisingEdge(dut.clk)


async def reset_core(dut, cycles=5):
    """Apply the active-low reset used by bnn_core when it is the top level."""
    dut.rstn.value = 0
    dut.start.value = 0
    dut.in_ptr.value = 0
    dut.wt_ptr.value = 0
    dut.inp_bram_dout.value = 0
    dut.wt_bram_dout.value = 0
    await ClockCycles(dut.clk, cycles)
    dut.rstn.value = 1
    await RisingEdge(dut.clk)


def core_from_top(dut):
    """Return the real BNN core instance from top_soc."""
    return dut.u_bnn_accelerator.i_bnn_core


def core_state(core) -> int:
    return safe_int(core.state)


def core_debug(core) -> str:
    """Format key internal BNN signals for assertion messages."""
    fields = [
        ("state", getattr(core, "state", None)),
        ("busy", getattr(core, "busy", None)),
        ("done", getattr(core, "done", None)),
        ("result", getattr(core, "result", None)),
        ("word_idx", getattr(core, "word_idx", None)),
        ("accumulator", getattr(getattr(core, "pe", None), "accumulator", None)),
        ("offset_count", getattr(core, "offset_count", None)),
        ("inp_bram_addr", getattr(core, "inp_bram_addr", None)),
        ("wt_bram_addr", getattr(core, "wt_bram_addr", None)),
        ("inputs_reg", getattr(core, "inputs_reg", None)),
        ("weights_reg", getattr(core, "weights_reg", None)),
        ("sum_reg", getattr(getattr(core, "pe", None), "sum_reg", None)),
    ]
    parts = []
    for name, handle in fields:
        if handle is not None:
            value = safe_int(handle)
            parts.append(f"{name}=0x{value:08x}" if "addr" in name or name in {"result", "accumulator", "inputs_reg", "weights_reg"} else f"{name}={value}")
    return ", ".join(parts)


def soc_debug(dut) -> str:
    """Format SoC and accelerator state for integration failures."""
    core = core_from_top(dut)
    wrapper = dut.u_bnn_accelerator
    fields = [
        ("mem_valid", dut.mem_valid),
        ("mem_ready", dut.mem_ready),
        ("mem_addr", dut.mem_addr),
        ("mem_wdata", dut.mem_wdata),
        ("mem_wstrb", dut.mem_wstrb),
        ("mem_rdata", dut.mem_rdata),
        ("led", dut.led),
        ("ctrl_reg", wrapper.ctrl_reg),
        ("status_reg", wrapper.status_reg),
        ("in_ptr_reg", wrapper.in_ptr_reg),
        ("wt_ptr_reg", wrapper.wt_ptr_reg),
        ("bnn_start", wrapper.bnn_start),
        ("bnn_busy", wrapper.bnn_busy),
        ("bnn_done", wrapper.bnn_done),
        ("bnn_result", wrapper.bnn_result),
    ]
    parts = []
    for name, handle in fields:
        value = safe_int(handle)
        if "addr" in name or "data" in name or "reg" in name or "ptr" in name or "result" in name:
            parts.append(f"{name}=0x{value:08x}")
        else:
            parts.append(f"{name}={value}")
    return "; ".join(parts) + "; core: " + core_debug(core)


async def drive_sync_bram(core, input_words, weight_words):
    """Drive the bnn_core BRAM read ports with one-cycle synchronous latency."""
    while True:
        await RisingEdge(core.clk)
        input_index = safe_int(core.inp_bram_addr) >> 2
        weight_index = safe_int(core.wt_bram_addr) >> 2
        core.inp_bram_dout.value = input_words[input_index] if input_index < len(input_words) else 0
        core.wt_bram_dout.value = weight_words[weight_index] if weight_index < len(weight_words) else 0


@dataclass
class CoreRunResult:
    result: int
    latency_cycles: int


async def run_core_vectors(dut, input_words, weight_words, timeout_cycles=200):
    """Reset bnn_core, run one vector set, and return result plus latency."""
    if len(input_words) != TOTAL_WORDS or len(weight_words) != TOTAL_WORDS:
        raise ValueError(f"bnn_core default TOTAL_WORDS is {TOTAL_WORDS}")

    await reset_core(dut)
    bram_task = cocotb.start_soon(drive_sync_bram(dut, input_words, weight_words))

    dut.in_ptr.value = 0
    dut.wt_ptr.value = 0
    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0

    saw_busy = False
    latency = 0
    for _ in range(timeout_cycles):
        await RisingEdge(dut.clk)
        latency += 1
        saw_busy |= safe_int(dut.busy) == 1
        if safe_int(dut.done) == 1:
            result = safe_int(dut.result)
            bram_task.cancel()
            with contextlib.suppress(CancelledError):
                await bram_task
            assert saw_busy, "bnn_core completed without asserting busy"
            return CoreRunResult(result=result, latency_cycles=latency)

    bram_task.cancel()
    raise AssertionError(f"bnn_core timed out after {timeout_cycles} cycles: {core_debug(dut)}")


async def wait_for_value(dut, handle, expected, timeout_cycles, name):
    """Wait until a signal equals an expected integer value."""
    for cycle in range(timeout_cycles):
        await RisingEdge(dut.clk)
        if safe_int(handle) == expected:
            return cycle
    raise AssertionError(f"Timed out waiting for {name} == 0x{expected:x}")
