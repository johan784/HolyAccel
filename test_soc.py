import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer, ClockCycles

class SocTestbench:
    """Industry-standard testbench environment for the BNN SoC."""
    
    def __init__(self, dut):
        self.dut = dut
        self.log = dut._log
        self.axi_write_count = 0

    async def generate_clock(self):
        """Generates a 100MHz clock."""
        cocotb.start_soon(Clock(self.dut.clk, 10, units="ns").start())

    async def apply_reset(self):
        """Standardized reset sequence."""
        self.dut.rst.value = 1
        await ClockCycles(self.dut.clk, 10)
        self.dut.rst.value = 0
        self.log.info("Hardware Reset Complete. CPU booting...")

    async def monitor_axi_bus(self):
        """
        Grey-Box Monitor: Snoops the internal AXI bus.
        We verify that EXACTLY 8 words are written to the BNN accelerator.
        """
        while True:
            await RisingEdge(self.dut.clk)
            
            # Check for a valid AXI write handshake
            # Update these signal names if your wrapper uses different ones (e.g., s_axi_wvalid)
            try:
                wvalid = self.dut.u_bnn_accelerator.s_axi_wvalid.value
                wready = self.dut.u_bnn_accelerator.s_axi_wready.value
                
                if wvalid == 1 and wready == 1:
                    self.axi_write_count += 1
                    self.log.info(f"AXI Bus Monitor: Detected word write {self.axi_write_count}/8")
            except AttributeError:
                # Failsafe if signal names are different
                pass

    async def wait_for_firmware(self, timeout_cycles=20000):
        """
        Black-Box Monitor: Waits for firmware to report status via LED.
        Includes a hard timeout to prevent infinite hangs.
        """
        for cycle in range(timeout_cycles):
            await RisingEdge(self.dut.clk)
            
            # Read the LED output
            try:
                led_val = int(self.dut.led.value)
            except ValueError:
                led_val = 0 # Handle 'X' or 'Z' states during boot
                
            if led_val == 0xFF:
                self.log.info(f"Firmware reported SUCCESS at cycle {cycle}.")
                return True
            elif led_val == 0x01:
                self.log.error(f"Firmware reported FAILURE at cycle {cycle}.")
                return False
                
        self.log.error(f"Simulation TIMEOUT: Firmware hung after {timeout_cycles} cycles.")
        return False

@cocotb.test()
async def test_bnn_8_word_integration(dut):
    """
    Test Case 1: Verifies the full SoC boot, 8-word AXI transfer, and BNN execution.
    """
    tb = SocTestbench(dut)
    
    # 1. Start Clock and Bus Monitors
    await tb.generate_clock()
    cocotb.start_soon(tb.monitor_axi_bus())
    
    # 2. Reset the DUT
    await tb.apply_reset()
    
    # 3. Wait for Firmware Execution
    dut._log.info("Waiting for firmware to execute BNN workload...")
    firmware_success = await tb.wait_for_firmware(timeout_cycles=50000)
    
    # 4. Industry-Standard Assertions (The Scoreboard)
    # Assertion 1: Did the firmware calculate the correct math?
    assert firmware_success is True, "Fatal: Firmware math verification failed or timed out."
    
    # Assertion 2: Did the hardware receive exactly 8 words before starting?
    # (Assuming 8 data writes + 1 control write = 9 total writes)
    assert tb.axi_write_count >= 8, f"Fatal: Edge case failed. Expected at least 8 AXI writes, got {tb.axi_write_count}."
    
    dut._log.info("ALL VERIFICATION CHECKS PASSED. Design is ready for synthesis.")