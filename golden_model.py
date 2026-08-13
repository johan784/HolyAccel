import math

# Constants from constants_pkg.sv (hardcoded for standalone Python model)
TOTAL_WORDS = 32
ACCUM_WIDTH = int(math.log2(TOTAL_WORDS * 32)) + 2 # $clog2(TOTAL_WORDS * 32) + 2 = 12

def popcount(value: int) -> int:
    """Counts the number of set bits in an integer."""
    count = 0
    # Ensure value is treated as 32-bit unsigned for popcount
    value &= 0xFFFFFFFF
    while value > 0:
        value &= (value - 1)
        count += 1
    return count

def bnn_pe_accumulate(activation_words: list[int], weight_words: list[int]) -> int:
    """
    Calculates the accumulated value for a single Processing Element (PE).
    This mirrors the RTL's XNOR-Popcount accumulation.
    """
    if len(activation_words) != len(weight_words):
        raise ValueError("Activation and weight word lists must have the same length.")
    
    accumulator = 0
    for act_word, wt_word in zip(activation_words, weight_words):
        # RTL: xnor_result = ~(inp ^ wt);
        # In Python, XOR is `^`. To get the equivalent of `~` on a 32-bit value,
        # we XOR with a mask of all ones (0xFFFFFFFF).
        xnor_result = (~(act_word ^ wt_word)) & 0xFFFFFFFF
        
        # RTL: adder-tree popcount (sum_reg)
        current_popcount = popcount(xnor_result)
        
        # RTL: accumulator <= accumulator + {{(ACCUM_WIDTH-6){1'b0}}, sum_reg};
        # Python handles arbitrary precision, so we just add.
        accumulator += current_popcount
        
    return accumulator

def bnn_pe_binarize(accumulated_value: int, threshold: int) -> int:
    """
    Binarizes the accumulated value based on a strict greater-than threshold.
    Mirrors the RTL: if(accumulator > threshold) begin neuron_value = 1; else neuron_value = 0;
    """
    if accumulated_value > threshold:
        return 1
    else:
        return 0

def bnn_score(activation_words: list[int], weight_words: list[int]) -> int:
    """
    Calculates the final accumulated score for a single PE, as used in existing tests.
    This is equivalent to bnn_pe_accumulate.
    """
    return bnn_pe_accumulate(activation_words, weight_words)