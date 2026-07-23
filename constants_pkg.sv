package constants_pkg;

    
    parameter int TOTAL_WORDS = 8;
    // One sign bit plus enough magnitude bits to represent TOTAL_WORDS * 32.
    parameter  int ACCUM_WIDTH = $clog2(TOTAL_WORDS * 32) + 2;
    parameter int WORD_WIDTH  = $clog2(TOTAL_WORDS);
    parameter int NUM_PE = 8;
    parameter int NUM_LAYERS=
endpackage
