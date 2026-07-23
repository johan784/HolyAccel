"""Reference model for the BNN accelerator.

The RTL computes the number of equal bits between each input word and the
matching weight word, then accumulates that value over all words.
"""

MASK32 = 0xFFFF_FFFF
WORD_BITS = 32


def popcount32(value: int) -> int:
    """Return the population count of a 32-bit value."""
    return (value & MASK32).bit_count()


def word_similarity(input_word: int, weight_word: int) -> int:
    """Return the XNOR-popcount score for one 32-bit word pair."""
    return popcount32(~(input_word ^ weight_word))


def bnn_score(input_words, weight_words) -> int:
    """Return the accumulated BNN score for equal-length word vectors."""
    if len(input_words) != len(weight_words):
        raise ValueError("input_words and weight_words must have the same length")

    return sum(
        word_similarity(input_word, weight_word)
        for input_word, weight_word in zip(input_words, weight_words)
    )
