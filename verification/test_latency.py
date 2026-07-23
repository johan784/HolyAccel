import random

import cocotb

from verification.golden_model import bnn_score
from verification.utils import run_core_vectors, start_clock


@cocotb.test()
async def test_bnn_latency_statistics(dut):
    """Measure start-to-done latency across varied input data."""
    await start_clock(dut)
    rng = random.Random(0x1A7E_C0DE)
    latencies = []

    for _ in range(50):
        inputs = [rng.getrandbits(32) for _ in range(8)]
        weights = [rng.getrandbits(32) for _ in range(8)]
        expected = bnn_score(inputs, weights)
        observed = await run_core_vectors(dut, inputs, weights)
        assert observed.result == expected, (
            f"Latency sample returned wrong result: expected {expected}, got {observed.result}"
        )
        latencies.append(observed.latency_cycles)

    minimum = min(latencies)
    maximum = max(latencies)
    average = sum(latencies) / len(latencies)
    dut._log.info("BNN latency cycles: minimum=%d maximum=%d average=%.2f", minimum, maximum, average)
