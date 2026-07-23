import random

import cocotb

from verification.golden_model import bnn_score
from verification.utils import run_core_vectors, start_clock


@cocotb.test()
async def test_random_vectors(dut):
    """Run hundreds of random BNN vectors against the Python model."""
    await start_clock(dut)
    rng = random.Random(0xB00C0C0A)

    for vector_id in range(300):
        inputs = [rng.getrandbits(32) for _ in range(8)]
        weights = [rng.getrandbits(32) for _ in range(8)]
        expected = bnn_score(inputs, weights)
        observed = await run_core_vectors(dut, inputs, weights)
        assert observed.result == expected, (
            f"random vector {vector_id}: expected {expected}, got {observed.result}; "
            f"inputs={[hex(v) for v in inputs]}, weights={[hex(v) for v in weights]}"
        )
