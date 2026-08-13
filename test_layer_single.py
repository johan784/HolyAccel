import cocotb
from cocotb.triggers import RisingEdge, FallingEdge, ClockCycles, ReadOnly
from cocotb.clock import Clock
import random

from verification.golden_model import run_bnn_network_golden

# Constants matching constants_pkg.sv
NUM_PE = 8
TOTAL_WORDS = 32
MAX_NEURONS_PER_BANK = 32

def pack_desc(input_base, weight_base, threshold_base, input_words, output_neurons):
    """Packs the 128-bit layer_desc_t struct matching SystemVerilog packed struct layout."""
    return (input_base << 96) | (weight_base << 64) | (threshold_base << 32) | (input_words << 16) | output_neurons

class BNNCoreTB:
    def __init__(self, dut):
        self.dut = dut
        self.log = dut._log
        self.inp_bram = [0] * 1024
        self.th_bram = [0] * 1024

    async def setup(self):
        cocotb.start_soon(Clock(self.dut.clk, 10, units="ns").start())
        await self.reset()
        cocotb.start_soon(self._bram_model())

    async def reset(self):
        await FallingEdge(self.dut.clk)
        self.dut.rstn.value = 0
        self.dut.start.value = 0
        self.dut.first_layer.value = 1
        self.dut.last_layer.value = 1
        self.dut.current_desc.value = 0
        await ClockCycles(self.dut.clk, 5)
        await FallingEdge(self.dut.clk)
        self.dut.rstn.value = 1
        await ClockCycles(self.dut.clk, 2)

    async def _bram_model(self):
        """Models 1-cycle latency BRAM. Updates outputs at FallingEdge."""
        while True:
            await FallingEdge(self.dut.clk)
            try:
                inp_addr = int(self.dut.inp_bram_addr.value) >> 2
                if 0 <= inp_addr < len(self.inp_bram):
                    self.dut.inp_bram_dout.value = self.inp_bram[inp_addr]
            except Exception:
                pass
            
            try:
                th_addr = int(self.dut.th_bram_addr.value) >> 2
                if 0 <= th_addr < len(self.th_bram):
                    self.dut.th_bram_dout.value = self.th_bram[th_addr]
            except Exception:
                pass

    async def run_layer(self, input_words, output_neurons, weights, activations, thresholds):
        # Load BRAMs
        for i, val in enumerate(activations):
            self.inp_bram[i] = val
        for i, val in enumerate(thresholds):
            # Thresholds are signed 12-bit in RTL, but BRAM is 32-bit. 
            self.th_bram[i] = val & 0xFFFFFFFF 

        # Backdoor load weights into weight_bank
        for pe in range(NUM_PE):
            for n_bank in range(MAX_NEURONS_PER_BANK):
                for word in range(TOTAL_WORDS):
                    val = weights[pe][n_bank][word]
                    self.dut.weight_bank[pe][n_bank][word].value = val

        # Drive descriptor and control signals
        desc = pack_desc(0, 0, 0, input_words, output_neurons)
        await FallingEdge(self.dut.clk)
        self.dut.current_desc.value = desc
        self.dut.first_layer.value = 1
        self.dut.last_layer.value = 1
        
        # Pulse start
        self.dut.start.value = 1
        await RisingEdge(self.dut.clk)
        self.dut.start.value = 0

        # Wait for done
        for cycle in range(100000):
            await RisingEdge(self.dut.clk)
            if int(self.dut.done.value) == 1:
                break
        else:
            raise cocotb.result.TestFailure(f"Timeout waiting for done. State: {int(self.dut.state.value)}")

        # Read output buffer
        await ReadOnly()
        act_select = int(self.dut.act_select.value)
        num_out_words = (output_neurons + 31) // 32
        
        # act_select=0 -> wrote to A. act_select=1 -> wrote to B.
        target_buf = self.dut.activation_buffer_A if act_select == 0 else self.dut.activation_buffer_B
        
        out_buf = []
        for i in range(num_out_words):
            out_buf.append(int(target_buf[i].value))
            
        return out_buf

def generate_layer_data(input_words, output_neurons, seed):
    rng = random.Random(seed)
    
    # Weights: [pe][batch][word]
    weights = [[[rng.getrandbits(32) for _ in range(input_words)] for _ in range((output_neurons + NUM_PE - 1) // NUM_PE)] for _ in range(NUM_PE)]
    
    # Pad weights to TOTAL_WORDS and MAX_NEURONS_PER_BANK to match RTL array bounds
    for pe in range(NUM_PE):
        for batch in range(len(weights[pe])):
            weights[pe][batch] += [0] * (TOTAL_WORDS - input_words)
        while len(weights[pe]) < MAX_NEURONS_PER_BANK:
            weights[pe].append([0]*TOTAL_WORDS)
            
    activations = [rng.getrandbits(32) for _ in range(input_words)]
    
    # Thresholds: random signed values to test strict > boundary
    thresholds = [rng.randint(-100, 100) for _ in range(output_neurons)]
        
    return weights, activations, thresholds

async def run_edge_case(dut, input_words, output_neurons, seed, desc):
    dut._log.info(f"--- Running Edge Case: {desc} (in_w={input_words}, out_n={output_neurons}) ---")
    tb = BNNCoreTB(dut)
    await tb.setup()
    
    weights, activations, thresholds = generate_layer_data(input_words, output_neurons, seed)
    
    # Golden model
    config = {'input_words': input_words, 'output_neurons': output_neurons, 'input_base':0, 'weight_base':0, 'threshold_base':0}
    golden = run_bnn_network_golden(activations, [weights], [thresholds], [config], NUM_PE)
    
    # DUT
    dut_out = await tb.run_layer(input_words, output_neurons, weights, activations, thresholds)
    
    assert dut_out == golden, f"Mismatch!\nGolden: {[hex(x) for x in golden]}\nDUT:    {[hex(x) for x in dut_out]}"
    dut._log.info(f"PASSED: {desc}")

@cocotb.test()
async def test_architecture_edge_cases(dut):
    """Sweeps batching, packing, and dimension boundaries."""
    cases = [
        (32, 1, "Min neurons (1)"),
        (32, 7, "Partial batch < NUM_PE"),
        (32, 8, "Exact 1 batch (NUM_PE)"),
        (32, 9, "Full + 1 partial"),
        (32, 16, "Exact 2 batches"),
        (32, 32, "Exact 4 batches (32-bit packing boundary)"),
        (32, 33, "Boundary + 1 partial"),
        (1, 8, "Min input words (1)"),
        (32, 64, "Large layer (8 batches)"),
        (16, 17, "Odd words, odd neurons"),
    ]
    
    for in_w, out_n, desc in cases:
        await run_edge_case(dut, in_w, out_n, seed=0xDEADBEEF, desc=desc)