// sram_bb.sv
// Blackbox declaration for the sky130 2KB (32x512) dual-port SRAM macro.
// Tells Yosys: "This module exists and here are its pins. Do NOT synthesize
// its internals into logic gates — treat it as a sealed hard macro."

(* blackbox *)
module sky130_sram_2kbyte_1rw1r_32x512_8 (
    // Port 0: Read/Write (used by the simulation preloader)
    input  logic        clk0,
    input  logic        csb0,
    input  logic        web0,
    input  logic [3:0]  wmask0,
    input  logic [8:0]  addr0,
    input  logic [31:0] din0,
    output logic [31:0] dout0,

    // Port 1: Read-only (used by the FSM compute/prefetch pipeline)
    input  logic        clk1,
    input  logic        csb1,
    input  logic [8:0]  addr1,
    output logic [31:0] dout1
);
endmodule