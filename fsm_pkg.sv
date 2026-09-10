package fsm_pkg;


typedef enum logic [4:0] {
    RESET,
    CONFIG_LAYER,
    IDLE,
    WAIT,
    FETCH_ACTIVATIONS,
    INITIAL_FETCH_WEIGHTS,
    FETCH_THRESHOLDS,
    COMPUTE,
    LOAD_OUTPUT,
    READY
} state_t;

endpackage 
