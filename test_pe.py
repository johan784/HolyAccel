import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer, ReadOnly, ClockCycles
from cocotb.binary import BinaryValue
import random
import math

from verification.golden_model import bnn_pe_accumulate, bnn_pe_binarize, popcount
from verification.utils import reset_core, start_clock, safe_int

# Constants from constants_pkg.sv (hardcoded for testbench clarity)
TOTAL_WORDS = 32
ACCUM_WIDTH = int(math.log2(TOTAL_WORDS * 32)) + 2 # $clog2(TOTAL_WORDS * 32) + 2 = 12

async def drive_pe_inputs(dut, activations, weights, threshold, enable, clear_accumulator):
    """Drives inputs to the processing_element."""
    dut.activations_buffer.value = activations
    dut.weight_buffer.value = weights
    dut.threshold.value = threshold
    dut.enable.value = enable
    dut.clear_accumulator.value = clear_accumulator
    await RisingEdge(dut.clk)

@cocotb.test()
async def test_pe_reset(dut):
    """Test processing_element reset behavior."""
    await start_clock(dut)
    
    # Apply reset
    dut.rstn.value = 0
    await ClockCycles(dut.clk, 2)
    
    # Check accumulator reset
    await ReadOnly()
    assert safe_int(dut.accumulator) == 0, f"Accumulator not reset to 0, got {safe_int(dut.accumulator)}"
    
    dut.rstn.value = 1
    await ClockCycles(dut.clk, 2)
    dut._log.info("PE Reset Test Passed.")

@cocotb.test()
async def test_pe_single_word_accumulation(dut):
    """Test single word XNOR-popcount accumulation."""
    await start_clock(dut)
    await reset_core(dut) # Assuming reset_core works for PE (resets rstn)

    # Test vector 1: All bits match (XNOR = all ones)
    act_word_1 = 0xFFFFFFFF
    wt_word_1 = 0xFFFFFFFF
    expected_popcount_1 = popcount((~(act_word_1 ^ wt_word_1)) & 0xFFFFFFFF)
    
    await drive_pe_inputs(dut, act_word_1, wt_word_1, 0, 1, 0) # enable=1, clear_accumulator=0
    await RisingEdge(dut.clk) # Accumulation happens on posedge
    await ReadOnly()
    assert safe_int(dut.accumulator) == expected_popcount_1, \
        f"Accumulator mismatch for all-match. Expected {expected_popcount_1}, got {safe_int(dut.accumulator)}"
    
    # Test vector 2: All bits mismatch (XNOR = all zeros)
    act_word_2 = 0xFFFFFFFF
    wt_word_2 = 0x00000000
    expected_popcount_2 = popcount((~(act_word_2 ^ wt_word_2)) & 0xFFFFFFFF)
    
    await drive_pe_inputs(dut, act_word_2, wt_word_2, 0, 1, 0) # enable=1, clear_accumulator=0
    await RisingEdge(dut.clk)
    await ReadOnly()
    assert safe_int(dut.accumulator) == expected_popcount_1 + expected_popcount_2, \
        f"Accumulator mismatch for all-mismatch. Expected {expected_popcount_1 + expected_popcount_2}, got {safe_int(dut.accumulator)}"

    dut._log.info("PE Single Word Accumulation Test Passed.")

@cocotb.test()
async def test_pe_multi_word_accumulation(dut):
    """Test multiple word accumulation with random values."""
    await start_clock(dut)
    await reset_core(dut)

    num_words = random.randint(1, TOTAL_WORDS)
    activation_words = [random.getrandbits(32) for _ in range(num_words)]
    weight_words = [random.getrandbits(32) for _ in range(num_words)]
    
    expected_total_accum = bnn_pe_accumulate(activation_words, weight_words)
    
    current_accum = 0
    for i in range(num_words):
        await drive_pe_inputs(dut, activation_words[i], weight_words[i], 0, 1, 0)
        await RisingEdge(dut.clk)
        current_accum += popcount((~(activation_words[i] ^ weight_words[i])) & 0xFFFFFFFF)
        await ReadOnly()
        assert safe_int(dut.accumulator) == current_accum, \
            f"Multi-word accum mismatch at word {i}. Expected {current_accum}, got {safe_int(dut.accumulator)}"
    
    await ReadOnly()
    assert safe_int(dut.accumulator) == expected_total_accum, \
        f"Final multi-word accum mismatch. Expected {expected_total_accum}, got {safe_int(dut.accumulator)}"
    
    dut._log.info("PE Multi-Word Accumulation Test Passed.")

@cocotb.test()
async def test_pe_clear_accumulator(dut):
    """Test clear_accumulator functionality."""
    await start_clock(dut)
    await reset_core(dut)

    # Accumulate some value
    await drive_pe_inputs(dut, 0xFFFFFFFF, 0xFFFFFFFF, 0, 1, 0)
    await RisingEdge(dut.clk)
    await ReadOnly()
    assert safe_int(dut.accumulator) == 32, "Accumulator didn't accumulate."

    # Assert clear_accumulator
    await drive_pe_inputs(dut, 0, 0, 0, 0, 1) # enable=0, clear_accumulator=1
    await RisingEdge(dut.clk)
    await ReadOnly()
    assert safe_int(dut.accumulator) == 0, "clear_accumulator failed."

    # Accumulate again after clear
    await drive_pe_inputs(dut, 0xAAAAAAAA, 0xAAAAAAAA, 0, 1, 0)
    await RisingEdge(dut.clk)
    await ReadOnly()
    assert safe_int(dut.accumulator) == 16, "Accumulator didn't accumulate after clear."

    dut._log.info("PE Clear Accumulator Test Passed.")

@cocotb.test()
async def test_pe_enable_gating(dut):
    """Test enable signal gating accumulation."""
    await start_clock(dut)
    await reset_core(dut)

    # Accumulate with enable=1
    await drive_pe_inputs(dut, 0xFFFFFFFF, 0xFFFFFFFF, 0, 1, 0)
    await RisingEdge(dut.clk)
    await ReadOnly()
    assert safe_int(dut.accumulator) == 32, "Accumulator didn't accumulate with enable=1."

    # Try to accumulate with enable=0
    await drive_pe_inputs(dut, 0xFFFFFFFF, 0xFFFFFFFF, 0, 0, 0) # enable=0
    await RisingEdge(dut.clk)
    await ReadOnly()
    assert safe_int(dut.accumulator) == 32, "Accumulator changed with enable=0."

    dut._log.info("PE Enable Gating Test Passed.")

@cocotb.test()
async def test_pe_threshold_binarization(dut):
    """Test strict greater-than threshold binarization."""
    await start_clock(dut)
    await reset_core(dut)

    # Accumulate a known value (e.g., 32)
    await drive_pe_inputs(dut, 0xFFFFFFFF, 0xFFFFFFFF, 0, 1, 0)
    await RisingEdge(dut.clk)
    await ReadOnly()
    accum_val = safe_int(dut.accumulator)
    assert accum_val == 32, "Accumulator didn't accumulate to 32."

    # Test threshold < accumulator (expect 1)
    threshold_1 = accum_val - 1 # e.g., 31
    await drive_pe_inputs(dut, 0, 0, threshold_1, 0, 0) # enable=0, no accumulation
    await ReadOnly()
    assert safe_int(dut.neuron_value) == 1, \
        f"Threshold {threshold_1} < {accum_val} failed. Expected 1, got {safe_int(dut.neuron_value)}"

    # Test threshold == accumulator (expect 0 due to strict >)
    threshold_2 = accum_val # e.g., 32
    await drive_pe_inputs(dut, 0, 0, threshold_2, 0, 0)
    await ReadOnly()
    assert safe_int(dut.neuron_value) == 0, \
        f"Threshold {threshold_2} == {accum_val} failed. Expected 0, got {safe_int(dut.neuron_value)}"

    # Test threshold > accumulator (expect 0)
    threshold_3 = accum_val + 1 # e.g., 33
    await drive_pe_inputs(dut, 0, 0, threshold_3, 0, 0)
    await ReadOnly()
    assert safe_int(dut.neuron_value) == 0, \
        f"Threshold {threshold_3} > {accum_val} failed. Expected 0, got {safe_int(dut.neuron_value)}"
    
    # Test signed thresholds (e.g., negative threshold)
    # Accumulate 0
    await drive_pe_inputs(dut, 0, 0, 0, 0, 1) # Clear accumulator
    await RisingEdge(dut.clk)
    await ReadOnly()
    assert safe_int(dut.accumulator) == 0, "Accumulator not cleared."

    # Accumulate 10
    for _ in range(10):
        await drive_pe_inputs(dut, 0x00000001, 0x00000001, 0, 1, 0) # Popcount 1
        await RisingEdge(dut.clk)
    await ReadOnly()
    accum_val = safe_int(dut.accumulator)
    assert accum_val == 10, "Accumulator didn't accumulate to 10."

    # Threshold -5 (expect 1, since 10 > -5)
    threshold_neg = -5
    await drive_pe_inputs(dut, 0, 0, threshold_neg, 0, 0)
    await ReadOnly()
    assert safe_int(dut.neuron_value) == 1, \
        f"Signed threshold {threshold_neg} failed. Expected 1, got {safe_int(dut.neuron_value)}"

    # Threshold 15 (expect 0, since 10 is not > 15)
    threshold_pos_high = 15
    await drive_pe_inputs(dut, 0, 0, threshold_pos_high, 0, 0)
    await ReadOnly()
    assert safe_int(dut.neuron_value) == 0, \
        f"Signed threshold {threshold_pos_high} failed. Expected 0, got {safe_int(dut.neuron_value)}"

    dut._log.info("PE Threshold Binarization Test Passed.")