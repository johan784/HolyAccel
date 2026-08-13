import cocotb
from cocotb.triggers import RisingEdge, ClockCycles, ReadOnly
import random

from verification.utils import reset_core, start_clock, safe_int, get_clk

NUM_PE = 8
TOTAL_WORDS = 32
MAX_NEURONS_PER_BANK = 32

class AXITB:
    """Testbench for the AXI-Lite Wrapper."""
    def __init__(self, dut):
        self.dut = dut
        self.log = dut._log

    async def setup_dut(self):
        await start_clock(self.dut)
        
        # Tie off BRAM inputs to 0. 
        if hasattr(self.dut, 'inp_bram_dout'):
            self.dut.inp_bram_dout.value = 0
        if hasattr(self.dut, 'th_bram_dout'):
            self.dut.th_bram_dout.value = 0
            
        self.dut.s_axi_awvalid.value = 0
        self.dut.s_axi_wvalid.value = 0
        self.dut.s_axi_arvalid.value = 0
        self.dut.s_axi_bready.value = 1
        self.dut.s_axi_rready.value = 1
        await reset_core(self.dut)

    async def axi_write(self, addr, data):
        clk = get_clk(self.dut)
        await RisingEdge(clk)
        self.dut.s_axi_awaddr.value = addr
        self.dut.s_axi_awvalid.value = 1
        self.dut.s_axi_wdata.value = data
        self.dut.s_axi_wvalid.value = 1
        
        while safe_int(self.dut.s_axi_awready) == 0 or safe_int(self.dut.s_axi_wready) == 0:
            await RisingEdge(clk)
            
        await RisingEdge(clk)
        self.dut.s_axi_awvalid.value = 0
        self.dut.s_axi_wvalid.value = 0

    async def axi_read(self, addr):
        clk = get_clk(self.dut)
        await RisingEdge(clk)
        self.dut.s_axi_araddr.value = addr
        self.dut.s_axi_arvalid.value = 1
        
        while safe_int(self.dut.s_axi_arready) == 0:
            await RisingEdge(clk)
            
        await RisingEdge(clk)
        self.dut.s_axi_arvalid.value = 0
        
        while safe_int(self.dut.s_axi_rvalid) == 0:
            await RisingEdge(clk)
            
        await ReadOnly()
        return safe_int(self.dut.s_axi_rdata)

    def _load_weights(self, weights):
        # Reaches through the wrapper into the core to preload the weight bank
        for pe in range(NUM_PE):
            for bank in range(MAX_NEURONS_PER_BANK):
                for word in range(TOTAL_WORDS):
                    self.dut.i_bnn_core.weight_bank[pe][bank][word].value = weights[pe][bank][word]

@cocotb.test()
async def test_axi_sequencing(dut):
    """Tests descriptor writing and multi-layer sequencing via the AXI interface."""
    tb = AXITB(dut)
    await tb.setup_dut()

    num_layers = 6
    dut._log.info(f"Writing {num_layers} layer descriptors...")

    # Preload weight bank with dummy data so it's not all zeros
    dummy_weights = [[[0xDEADBEEF for _ in range(TOTAL_WORDS)] for _ in range(MAX_NEURONS_PER_BANK)] for _ in range(NUM_PE)]
    tb._load_weights(dummy_weights)

    # Write descriptors
    for i in range(num_layers):
        base_addr = 0x100 + i * 32
        await tb.axi_write(base_addr + 0, i * 0x1000) # input_base (mock address)
        
        # CRITICAL FIX: The core uses weight_base[4:0] as the slot offset!
        # So we must write the slot number (i), not a huge memory address.
        await tb.axi_write(base_addr + 4, i)            # weight_base (slot offset)
        
        await tb.axi_write(base_addr + 8, i * 0x3000) # threshold_base (mock address)
        await tb.axi_write(base_addr + 12, 32)        # input_words
        await tb.axi_write(base_addr + 16, 8)         # output_neurons

    # Write num_layers
    await tb.axi_write(0x08, num_layers)

    # Start the accelerator
    dut._log.info("Starting accelerator...")
    await tb.axi_write(0x00, 1) # Write to CTRL reg to start

    clk = get_clk(dut)
    
    # Poll status until done
    for _ in range(5000):
        status = await tb.axi_read(0x04)
        is_done = (status >> 1) & 1
        if is_done:
            dut._log.info("Accelerator finished (done bit is high).")
            break
        await ClockCycles(clk, 10)
    else:
        raise cocotb.result.TestFailure("Timeout waiting for accelerator to finish.")

    # CRITICAL FIX: Advance one clock cycle before ReadOnly to escape the ReadOnly phase
    await RisingEdge(clk)
    await ReadOnly()
    
    # Verify final state
    final_layer = safe_int(dut.current_layer)
    assert final_layer == num_layers - 1, f"Expected to end on layer {num_layers - 1}, but ended on {final_layer}"

    dut._log.info("AXI sequencing test passed.")