"""Reusable top-level SoC testbench helpers."""

import cocotb
from cocotb.triggers import RisingEdge

from verification.utils import (
    BNN_CTRL,
    BNN_INPUT_PTR,
    BNN_STATUS,
    BNN_WEIGHT_PTR,
    LED_FAIL,
    LED_PASS,
    reset_dut,
    safe_int,
    soc_debug,
    start_clock,
)


class SocTestbench:
    """Small SoC harness that observes the real CPU-to-accelerator path."""

    def __init__(self, dut):
        self.dut = dut
        self.log = dut._log
        self.accel_started = False
        self.busy_seen = False
        self.done_seen = False
        self.input_ptr_written = False
        self.weight_ptr_written = False
        self.ctrl_start_writes = 0

    async def start(self):
        await start_clock(self.dut)
        cocotb.start_soon(self.monitor_accelerator())
        await reset_dut(self.dut)

    async def monitor_accelerator(self):
        """Track internal wrapper/core activity using the checked hierarchy."""
        wrapper = self.dut.u_bnn_accelerator
        core = wrapper.i_bnn_core
        while True:
            await RisingEdge(self.dut.clk)

            if safe_int(wrapper.s_axi_awvalid) and safe_int(wrapper.s_axi_wvalid) and safe_int(wrapper.s_axi_awready):
                addr = safe_int(wrapper.s_axi_awaddr)
                data = safe_int(wrapper.s_axi_wdata)
                if addr == BNN_INPUT_PTR:
                    self.input_ptr_written = True
                elif addr == BNN_WEIGHT_PTR:
                    self.weight_ptr_written = True
                elif addr == BNN_CTRL and (data & 1):
                    self.ctrl_start_writes += 1
                    self.accel_started = True

            self.busy_seen |= safe_int(core.busy) == 1
            self.done_seen |= safe_int(core.done) == 1

    async def wait_for_firmware_led(self, timeout_cycles=50000):
        """Wait until firmware reports pass/fail through the LED register."""
        for cycle in range(timeout_cycles):
            await RisingEdge(self.dut.clk)
            led = safe_int(self.dut.led)
            if led == LED_PASS:
                self.log.info("Firmware PASS LED observed at cycle %d", cycle)
                return True
            if led == LED_FAIL:
                self.log.error("Firmware FAIL LED observed at cycle %d", cycle)
                return False

        raise AssertionError(f"Firmware timed out after {timeout_cycles} cycles: {soc_debug(self.dut)}")

    def assert_accelerator_activity(self):
        assert self.input_ptr_written, f"Firmware never wrote BNN input pointer: {soc_debug(self.dut)}"
        assert self.weight_ptr_written, f"Firmware never wrote BNN weight pointer: {soc_debug(self.dut)}"
        assert self.accel_started, f"Firmware never started the accelerator: {soc_debug(self.dut)}"
        assert self.busy_seen, f"Accelerator busy was never asserted: {soc_debug(self.dut)}"
        assert self.done_seen, f"Accelerator done was never asserted: {soc_debug(self.dut)}"


__all__ = [
    "BNN_STATUS",
    "SocTestbench",
]
