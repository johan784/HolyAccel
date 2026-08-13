"""
Full-network (multi-layer) verification for bnn_core.
Per-layer scoreboard: every intermediate output is checked at next_layer time,
so the first diverging layer is named with full context.
"""

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import ClockCycles, FallingEdge, RisingEdge, ReadOnly
import random

from verification.golden_model import bnn_pe_accumulate, run_bnn_network_golden

NUM_PE = 8
TOTAL_WORDS = 32
MAX_NEURONS_PER_BANK = 32


def pack_desc(input_base, weight_base, threshold_base, input_words, output_neurons):
    return ((input_base << 96) | (weight_base << 64) |
            (threshold_base << 32) | (input_words << 16) | output_neurons)


def _pack_bits(bits):
    words = []
    for i in range((len(bits) + 31) // 32):
        w = 0
        for j in range(32):
            b = i * 32 + j
            if b < len(bits):
                w |= (bits[b] & 1) << j
        words.append(w)
    return words


def _hex(words):
    return [hex(x) for x in words]


class BNNMultiLayerTB:
    def __init__(self, dut):
        self.dut = dut
        self.log = dut._log
        self.inp_bram = [0] * 1024
        self.th_bram = [0] * 1024

    async def setup(self):
        cocotb.start_soon(Clock(self.dut.clk, 10, unit="ns").start())
        await self.reset()
        cocotb.start_soon(self._bram_model())

    async def reset(self):
        await FallingEdge(self.dut.clk)
        self.dut.rstn.value = 0
        self.dut.start.value = 0
        self.dut.first_layer.value = 0
        self.dut.last_layer.value = 0
        self.dut.current_desc.value = 0
        await ClockCycles(self.dut.clk, 5)
        await FallingEdge(self.dut.clk)
        self.dut.rstn.value = 1
        await ClockCycles(self.dut.clk, 2)
        await FallingEdge(self.dut.clk)

    async def _bram_model(self):
        while True:
            await FallingEdge(self.dut.clk)
            try:
                ia = int(self.dut.inp_bram_addr.value) >> 2
                if 0 <= ia < len(self.inp_bram):
                    self.dut.inp_bram_dout.value = self.inp_bram[ia]
            except Exception:
                pass
            try:
                ta = int(self.dut.th_bram_addr.value) >> 2
                if 0 <= ta < len(self.th_bram):
                    self.dut.th_bram_dout.value = self.th_bram[ta]
            except Exception:
                pass

    def _load_all_weights(self, all_weights, weight_offsets, layer_configs):
        # Clear the bank first
        for pe in range(NUM_PE):
            for bank in range(MAX_NEURONS_PER_BANK):
                for word in range(TOTAL_WORDS):
                    self.dut.weight_bank[pe][bank][word].value = 0
                    
        # Load each layer's weights into its designated slot offset
        for li, weights in enumerate(all_weights):
            offset = weight_offsets[li]
            batches = (layer_configs[li]["output_neurons"] + NUM_PE - 1) // NUM_PE
            for pe in range(NUM_PE):
                for b in range(batches):
                    for word in range(TOTAL_WORDS):
                        self.dut.weight_bank[pe][offset + b][word].value = weights[pe][b][word]

    def _load_thresholds(self, thresholds):
        for i, v in enumerate(thresholds):
            self.th_bram[i] = v & 0xFFFFFFFF

    def _load_activations(self, acts):
        for i, v in enumerate(acts):
            self.inp_bram[i] = v

    @staticmethod
    def _gen_layer(rng, in_w, out_n, mode):
        const = {"ones": 0xFFFFFFFF, "zeros": 0x00000000}.get(mode, None)
        weights = []
        for pe in range(NUM_PE):
            bank = []
            for _ in range(MAX_NEURONS_PER_BANK):
                row = ([const] * in_w) if const is not None else [rng.getrandbits(32) for _ in range(in_w)]
                row += [0] * (TOTAL_WORDS - in_w)
                bank.append(row)
            weights.append(bank)
        acts = ([const] * in_w) if const is not None else [rng.getrandbits(32) for _ in range(in_w)]
        thresholds = [rng.randint(-100, 100) for _ in range(out_n)]
        return weights, acts, thresholds

    @staticmethod
    def _layer_scores(acts, weights, in_w, out_n):
        return [bnn_pe_accumulate(acts[:in_w], weights[n % NUM_PE][n // NUM_PE][:in_w])
                for n in range(out_n)]

    async def run_network(self, layer_configs, seed, mode="random",
                          inject_start=False, boundary_thresholds=True):
        rng = random.Random(seed)

        all_weights, all_thresholds, expected_layers = [], [], []
        cur_acts, initial_acts = None, None
        
        # 1. Calculate weight slot offsets for each layer
        weight_offsets = []
        current_slot = 0
        for cfg in layer_configs:
            weight_offsets.append(current_slot)
            batches = (cfg["output_neurons"] + NUM_PE - 1) // NUM_PE
            current_slot += batches
            
        if current_slot > MAX_NEURONS_PER_BANK:
            raise ValueError(f"Network requires {current_slot} weight slots, but bank only has {MAX_NEURONS_PER_BANK}")

        for li, cfg in enumerate(layer_configs):
            in_w, out_n = cfg["input_words"], cfg["output_neurons"]
            w, a, t = self._gen_layer(rng, in_w, out_n, mode)
            if li == 0:
                cur_acts = a
                initial_acts = a
            scores = self._layer_scores(cur_acts, w, in_w, out_n)
            if boundary_thresholds and out_n > 0:
                t[0] = scores[0]
                if out_n > 1:
                    t[1] = scores[1] - 1
            cur_acts = _pack_bits([1 if scores[n] > t[n] else 0 for n in range(out_n)])
            expected_layers.append(cur_acts)
            all_weights.append(w)
            all_thresholds.append(t)

        golden = run_bnn_network_golden(initial_acts, all_weights, all_thresholds,
                                        layer_configs, NUM_PE)

        self._load_activations(initial_acts)
        await FallingEdge(self.dut.clk)
        
        # 2. Load ALL weights into the bank at their respective offsets ONCE
        self._load_all_weights(all_weights, weight_offsets, layer_configs)
        self._load_thresholds(all_thresholds[0])

        cfg0 = layer_configs[0]
        # 3. Pass the correct weight_base (offset) for layer 0
        self.dut.current_desc.value = pack_desc(0, weight_offsets[0], 0, cfg0["input_words"], cfg0["output_neurons"])
        self.dut.first_layer.value = 1
        self.dut.last_layer.value = 1 if len(layer_configs) == 1 else 0

        self.dut.start.value = 1
        await RisingEdge(self.dut.clk)
        await RisingEdge(self.dut.clk)
        await FallingEdge(self.dut.clk)
        self.dut.start.value = 0

        for i in range(1, len(layer_configs)):
            for cyc in range(200000):
                await RisingEdge(self.dut.clk)
                if inject_start and i == 1 and cyc == 2:
                    await FallingEdge(self.dut.clk)
                    self.dut.start.value = 1
                    await RisingEdge(self.dut.clk)
                    await FallingEdge(self.dut.clk)
                    self.dut.start.value = 0
                    continue
                if int(self.dut.next_layer.value) == 1:
                    break
            else:
                raise AssertionError(f"Timeout waiting for next_layer before layer {i}")

            # ---- PER-LAYER SCOREBOARD: layer (i-1) just finished ----
            await ReadOnly()
            act_now = int(self.dut.act_select.value)
            wt_now = int(self.dut.wt_select.value)
            
            fin_buf = self.dut.activation_buffer_A if act_now == 1 else self.dut.activation_buffer_B
            oth_buf = self.dut.activation_buffer_B if act_now == 1 else self.dut.activation_buffer_A
            
            n_words = (layer_configs[i - 1]["output_neurons"] + 31) // 32
            got = [int(fin_buf[w].value) for w in range(n_words)]
            oth = [int(oth_buf[w].value) for w in range(n_words)]
            exp = expected_layers[i - 1]
            
            if got != exp:
                raise AssertionError(
                    f"LAYER {i-1} DIVERGED (seed={seed}, mode={mode})\n"
                    f"  act_select(now)={act_now} wt_select={wt_now}\n"
                    f"  finished-layer buffer: {_hex(got)}\n"
                    f"  other buffer:          {_hex(oth)}\n"
                    f"  expected:              {_hex(exp)}")

            cfg = layer_configs[i]
            await FallingEdge(self.dut.clk)
            
            # 4. Pass the correct weight_base (offset) for layer i
            self.dut.current_desc.value = pack_desc(0, weight_offsets[i], 0, cfg["input_words"], cfg["output_neurons"])
            self.dut.first_layer.value = 0
            self.dut.last_layer.value = 1 if i == len(layer_configs) - 1 else 0
            
            # We NO LONGER call self._load_weights() here because they are already in the bank!
            self._load_thresholds(all_thresholds[i])
            await RisingEdge(self.dut.clk)

        for _ in range(300000):
            await RisingEdge(self.dut.clk)
            if int(self.dut.done.value) == 1:
                break
        else:
            raise AssertionError("Timeout waiting for final done")

        # ---- FINAL LAYER SCOREBOARD ----
        await ReadOnly()
        act_now = int(self.dut.act_select.value)
        fin_buf = self.dut.activation_buffer_B if act_now == 1 else self.dut.activation_buffer_A
        
        dut_out = [int(fin_buf[w].value) for w in range((layer_configs[-1]["output_neurons"] + 31) // 32)]
        
        if dut_out != expected_layers[-1]:
            raise AssertionError(
                f"FINAL LAYER DIVERGED (seed={seed}, mode={mode})\n"
                f"  act_select(now)={act_now}\n"
                f"  expected: {_hex(expected_layers[-1])}\n  got:      {_hex(dut_out)}")
                
        assert dut_out == golden, (
            f"Golden-model mismatch!\nGolden: {_hex(golden)}\nDUT:    {_hex(dut_out)}")
            
        return dut_out, golden


SWEEP = [
    ("std_6layer_random", [
        {'input_words': 32, 'output_neurons': 8}, {'input_words': 1, 'output_neurons': 8},
        {'input_words': 1, 'output_neurons': 8}, {'input_words': 1, 'output_neurons': 8},
        {'input_words': 1, 'output_neurons': 8}, {'input_words': 1, 'output_neurons': 1}], 11, "random"),
    ("std_6layer_ones", [
        {'input_words': 32, 'output_neurons': 8}, {'input_words': 1, 'output_neurons': 8},
        {'input_words': 1, 'output_neurons': 8}, {'input_words': 1, 'output_neurons': 8},
        {'input_words': 1, 'output_neurons': 8}, {'input_words': 1, 'output_neurons': 1}], 22, "ones"),
    ("std_6layer_zeros", [
        {'input_words': 32, 'output_neurons': 8}, {'input_words': 1, 'output_neurons': 8},
        {'input_words': 1, 'output_neurons': 8}, {'input_words': 1, 'output_neurons': 8},
        {'input_words': 1, 'output_neurons': 8}, {'input_words': 1, 'output_neurons': 1}], 33, "zeros"),
    ("min_chain_all_1s", [
        {'input_words': 1, 'output_neurons': 1}, {'input_words': 1, 'output_neurons': 1},
        {'input_words': 1, 'output_neurons': 1}, {'input_words': 1, 'output_neurons': 1},
        {'input_words': 1, 'output_neurons': 1}, {'input_words': 1, 'output_neurons': 1}], 44, "random"),
    ("max_batches", [
        {'input_words': 32, 'output_neurons': 32}, {'input_words': 1, 'output_neurons': 64},
        {'input_words': 2, 'output_neurons': 33}, {'input_words': 2, 'output_neurons': 17},
        {'input_words': 1, 'output_neurons': 9}, {'input_words': 1, 'output_neurons': 1}], 55, "random"),
    ("mixed_fanin", [
        {'input_words': 16, 'output_neurons': 8}, {'input_words': 1, 'output_neurons': 16},
        {'input_words': 1, 'output_neurons': 24}, {'input_words': 1, 'output_neurons': 9},
        {'input_words': 1, 'output_neurons': 33}, {'input_words': 2, 'output_neurons': 1}], 66, "random"),
    ("two_layer", [
        {'input_words': 32, 'output_neurons': 33}, {'input_words': 2, 'output_neurons': 1}], 77, "random"),
    ("single_layer", [
        {'input_words': 32, 'output_neurons': 9}], 88, "random"),
]


@cocotb.test()
async def test_network_architecture_sweep(dut):
    tb = BNNMultiLayerTB(dut)
    await tb.setup()
    for name, configs, seed, mode in SWEEP:
        dut._log.info(f"--- Network: {name} ---")
        await tb.run_network(configs, seed=seed, mode=mode)
        dut._log.info(f"PASSED: {name}")


@cocotb.test()
async def test_start_during_busy_ignored(dut):
    tb = BNNMultiLayerTB(dut)
    await tb.setup()
    configs = [
        {'input_words': 32, 'output_neurons': 8}, {'input_words': 1, 'output_neurons': 8},
        {'input_words': 1, 'output_neurons': 1}]
    await tb.run_network(configs, seed=99, inject_start=True)


@cocotb.test()
async def test_back_to_back_inferences(dut):
    tb = BNNMultiLayerTB(dut)
    await tb.setup()
    cfg_a = [
        {'input_words': 32, 'output_neurons': 8}, {'input_words': 1, 'output_neurons': 8},
        {'input_words': 1, 'output_neurons': 1}]
    cfg_b = [
        {'input_words': 32, 'output_neurons': 17}, {'input_words': 1, 'output_neurons': 9},
        {'input_words': 1, 'output_neurons': 1}]
    await tb.run_network(cfg_a, seed=111)
    await tb.run_network(cfg_b, seed=222)   # deliberately NO reset
    dut._log.info("PASSED: back-to-back inferences without reset")