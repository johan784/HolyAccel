import math

# Constants from constants_pkg.sv (hardcoded for standalone Python model)
TOTAL_WORDS = 32
ACCUM_WIDTH = int(math.log2(TOTAL_WORDS * 32)) + 2 # $clog2(TOTAL_WORDS * 32) + 2 = 12

def popcount(value: int) -> int:
    """Counts the number of set bits in a 32-bit integer."""
    count = 0
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
        xnor_result = (~(act_word ^ wt_word)) & 0xFFFFFFFF
        current_popcount = popcount(xnor_result)
        accumulator += current_popcount
        
    return accumulator

def bnn_pe_binarize(accumulated_value: int, threshold: int) -> int:
    """
    Binarizes the accumulated value based on a strict greater-than threshold.
    Mirrors the RTL: if(accumulator > threshold) neuron_value = 1; else neuron_value = 0;
    """
    # Handle signed comparison
    if accumulated_value > threshold:
        return 1
    else:
        return 0

def run_bnn_network_golden(
    initial_activations: list[int],
    layer_weights: list[list[list[list[int]]]],
    layer_thresholds: list[list[int]],
    layer_configs: list[dict],
    num_pe: int
) -> list[int]:
    """Golden model for a full BNN network."""
    
    current_activations = initial_activations
    
    for layer_idx, config in enumerate(layer_configs):
        input_words_count = config['input_words']
        output_neurons = config['output_neurons']
        
        weights = layer_weights[layer_idx]
        thresholds = layer_thresholds[layer_idx]
        
        layer_input_activations = current_activations[:input_words_count]
        
        output_bits = []
        for neuron_idx in range(output_neurons):
            pe_idx = neuron_idx % num_pe
            neuron_batch_idx = neuron_idx // num_pe
            
            neuron_weight_words = weights[pe_idx][neuron_batch_idx][:input_words_count]
            
            accum_val = bnn_pe_accumulate(layer_input_activations, neuron_weight_words)
            
            # Truncate threshold to ACCUM_WIDTH and treat as signed
            threshold_val = thresholds[neuron_idx]
            sign_bit = 1 << (ACCUM_WIDTH - 1)
            mask = (1 << ACCUM_WIDTH) - 1
            truncated_threshold = threshold_val & mask
            if truncated_threshold & sign_bit:
                signed_threshold = truncated_threshold - (1 << ACCUM_WIDTH)
            else:
                signed_threshold = truncated_threshold

            output_bit = bnn_pe_binarize(accum_val, signed_threshold)
            output_bits.append(output_bit)
            
        # Pack the results to become the activations for the next layer
        packed_output = []
        num_output_words = (output_neurons + 31) // 32
        for i in range(num_output_words):
            word = 0
            for j in range(32):
                bit_idx = i * 32 + j
                if bit_idx < len(output_bits):
                    word |= (output_bits[bit_idx] << j)
            packed_output.append(word)
            
        current_activations = packed_output
        
    return current_activations