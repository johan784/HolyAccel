import cocotb

from verification.utils import IDLE, core_debug, core_state, reset_core, start_clock, safe_int


@cocotb.test()
async def test_reset_initializes_bnn_core(dut):
    """Reset must put the BNN core in IDLE with cleared outputs."""
    await start_clock(dut)
    await reset_core(dut)

    assert core_state(dut) == IDLE, f"FSM did not reset to IDLE: {core_debug(dut)}"
    assert safe_int(dut.busy) == 0, f"busy not cleared by reset: {core_debug(dut)}"
    assert safe_int(dut.done) == 0, f"done not cleared by reset: {core_debug(dut)}"
    assert safe_int(dut.result) == 0, f"result not cleared by reset: {core_debug(dut)}"
    assert safe_int(dut.pe.accumulator) == 0, f"PE accumulator not cleared by reset: {core_debug(dut)}"
