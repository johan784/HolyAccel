import cocotb

from verification.golden_model import bnn_score
from verification.utils import run_core_vectors, start_clock


PATTERNS = [
    ("all_match_ones", [0xFFFF_FFFF] * 8, [0xFFFF_FFFF] * 8),
    ("alternating_match", [0xAAAA_AAAA] * 8, [0xAAAA_AAAA] * 8),
    ("alternating_mismatch", [0xAAAA_AAAA] * 8, [0x5555_5555] * 8),
    ("all_mismatch", [0x0000_0000] * 8, [0xFFFF_FFFF] * 8),
    ("single_bit_difference", [0xFFFF_FFFF] * 8, [0xFFFF_FFFE] * 8),
    ("single_bit_match", [0x0000_0001] * 8, [0xFFFF_FFFE] * 8),
]


@cocotb.test()
async def test_popcount_patterns(dut):
    """Check deterministic XNOR-popcount patterns."""
    await start_clock(dut)

    for name, inputs, weights in PATTERNS:
        expected = bnn_score(inputs, weights)
        observed = await run_core_vectors(dut, inputs, weights)
        assert observed.result == expected, (
            f"{name}: expected BNN score {expected}, got {observed.result}"
        )
