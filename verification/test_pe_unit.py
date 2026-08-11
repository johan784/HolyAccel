"""PE unit tests. Write on FallingEdge, capture on RisingEdge, read in ReadOnly."""
import random

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import ClockCycles, FallingEdge, ReadOnly, RisingEdge

from verification.golden_model import bnn_pe_accumulate

MASK32 = 0xFFFF_FFFF


async def start_clock(dut, period_ns=10):
    cocotb.start_soon(Clock(dut.clk, period_ns, unit="ns").start())
    await ClockCycles(dut.clk, 2)


async def reset_pe(dut):
    await FallingEdge(dut.clk)
    dut.rstn.value = 0
    dut.enable.value = 0
    dut.clear_accumulator.value = 0
    dut.threshold.value = 0
    dut.activations_buffer.value = 0
    dut.weight_buffer.value = 0
    await ClockCycles(dut.clk, 3)
    await FallingEdge(dut.clk)
    dut.rstn.value = 1
    await ClockCycles(dut.clk, 1)


async def drive(dut, act, wt, thr=0, en=0, clr=0):
    await FallingEdge(dut.clk)
    dut.activations_buffer.value = act
    dut.weight_buffer.value = wt
    dut.threshold.value = thr
    dut.enable.value = en
    dut.clear_accumulator.value = clr


async def step(dut, act, wt, thr=0, en=1, clr=0):
    await drive(dut, act, wt, thr, en, clr)
    await RisingEdge(dut.clk)


async def read_accum(dut):
    await ReadOnly()
    return int(dut.accumulator.value)


async def read_neuron(dut):
    await ReadOnly()
    return int(dut.neuron_value.value)


@cocotb.test()
async def test_pe_reset(dut):
    await start_clock(dut)
    await reset_pe(dut)
    await ReadOnly()                          # enter ReadOnly exactly once...
    assert int(dut.accumulator.value) == 0
    assert int(dut.neuron_value.value) == 0   # ...then read both signals there


@cocotb.test()
async def test_pe_single_word(dut):
    await start_clock(dut)
    await reset_pe(dut)
    await step(dut, MASK32, MASK32)
    assert await read_accum(dut) == 32
    await step(dut, MASK32, 0)
    assert await read_accum(dut) == 32


@cocotb.test()
async def test_pe_multi_word(dut):
    await start_clock(dut)
    await reset_pe(dut)
    rng = random.Random(1234)
    n = rng.randint(2, 32)
    acts = [rng.getrandbits(32) for _ in range(n)]
    wts  = [rng.getrandbits(32) for _ in range(n)]
    for a, w in zip(acts, wts):
        await step(dut, a, w)
    got = await read_accum(dut)
    exp = bnn_pe_accumulate(acts, wts)
    assert got == exp, f"expected {exp}, got {got} (n={n})"


@cocotb.test()
async def test_pe_clear(dut):
    await start_clock(dut)
    await reset_pe(dut)
    await step(dut, MASK32, MASK32)
    assert await read_accum(dut) == 32
    await step(dut, MASK32, MASK32, en=0, clr=1)
    assert await read_accum(dut) == 0


@cocotb.test()
async def test_pe_enable_gating(dut):
    await start_clock(dut)
    await reset_pe(dut)
    await step(dut, MASK32, MASK32)
    assert await read_accum(dut) == 32
    await step(dut, MASK32, MASK32, en=0)
    assert await read_accum(dut) == 32


@cocotb.test()
async def test_pe_threshold_strict_greater(dut):
    await start_clock(dut)
    await reset_pe(dut)
    await step(dut, MASK32, MASK32)
    assert await read_accum(dut) == 32
    await drive(dut, 0, 0, thr=31)
    assert await read_neuron(dut) == 1
    await drive(dut, 0, 0, thr=32)
    assert await read_neuron(dut) == 0
    await drive(dut, 0, 0, thr=33)
    assert await read_neuron(dut) == 0


@cocotb.test()
async def test_pe_signed_threshold(dut):
    await start_clock(dut)
    await reset_pe(dut)
    for _ in range(10):
        await step(dut, MASK32, 0x8000_0000)
    assert await read_accum(dut) == 10
    await drive(dut, 0, 0, thr=-5)
    assert await read_neuron(dut) == 1
    await drive(dut, 0, 0, thr=10)
    assert await read_neuron(dut) == 0
    await drive(dut, 0, 0, thr=9)
    assert await read_neuron(dut) == 1