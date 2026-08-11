`ifndef TB_WEIGHT_PRELOAD_SV
`define TB_WEIGHT_PRELOAD_SV

// VERIFICATION ONLY: Do not include in synthesis.
// Dynamic weight loading is handled by the Cocotb testbench via 
// hierarchical access (--public-flat-rw). This module is a placeholder 
// to satisfy the Makefile source list without causing bind syntax errors.

module weight_preload_placeholder;
    initial begin
        $display("INFO: Weight preload placeholder compiled. Cocotb will handle dynamic loading.");
    end
endmodule

`endif // TB_WEIGHT_PRELOAD_SV