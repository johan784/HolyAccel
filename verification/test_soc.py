import cocotb

from verification.tb import SocTestbench
from verification.utils import BNN_RESULT, LED_PASS, safe_int, soc_debug


@cocotb.test()
async def test_firmware_boots_and_runs_bnn(dut):
    """Boot firmware and verify CPU, AXI-Lite, BNN, and LED integration."""
    tb = SocTestbench(dut)
    await tb.start()

    firmware_passed = await tb.wait_for_firmware_led(timeout_cycles=200000)
    tb.assert_accelerator_activity()

    result = safe_int(dut.u_bnn_accelerator.bnn_result)
    assert result != 0, f"BNN result never became valid/non-zero: {soc_debug(dut)}"
    assert firmware_passed, f"Firmware reported FAIL LED instead of PASS: {soc_debug(dut)}"
    assert safe_int(dut.led) == LED_PASS, f"LED did not hold PASS value: {soc_debug(dut)}"

    dut._log.info("BNN result register at 0x%08x = %d", BNN_RESULT, result)
