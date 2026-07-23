package layer_pkg;

typedef struct packed {
    logic [31:0] input_base;
    logic [31:0] weight_base;
    logic [31:0] threshold_base;

    logic [15:0] input_words;
    logic [15:0] output_neurons;
} layer_desc_t;

endpackage 
