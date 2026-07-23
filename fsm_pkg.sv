package fsm_pkg;

typedef enum logic [3:0] {
    IDLE              = 4'd0,
    CONFIGURE_LAYER   = 4'd1,
    WAIT_BRAM         = 4'd2,
    FETCH_ACTIVATIONS = 4'd3,
    FETCH_WEIGHTS     = 4'd4,
    COMPUTE           = 4'd5,
    LOAD_OUTPUT       = 4'd6,
    READY             = 4'd7
} state_t;

endpackage 

