module bnn_axi_wrapper (
    input  logic        aclk,
    input  logic        aresetn,
    // AXI-Lite Interface (Connect to System Bus)
    input  logic [31:0] s_axi_awaddr,
    input  logic        s_axi_awvalid,
    output logic        s_axi_awready,
    input  logic [31:0] s_axi_wdata,
    input  logic        s_axi_wvalid,
    output logic        s_axi_wready,
    output logic        s_axi_bvalid,
    input  logic        s_axi_bready,
    input  logic [31:0] s_axi_araddr,
    input  logic        s_axi_arvalid,
    output logic        s_axi_arready,
    output logic [31:0] s_axi_rdata,
    output logic        s_axi_rvalid,
    input  logic        s_axi_rready,
    output logic [1:0]  s_axi_bresp,
    output logic [1:0] s_axi_rresp,
    // BRAM Interface (Pass-through to your SoC memory)
    output logic [31:0] inp_bram_addr,
    input  logic [31:0] inp_bram_dout,
    output logic [31:0] wt_bram_addr,
    input  logic [31:0] wt_bram_dout
);

    // Register Map
    logic [31:0] ctrl_reg;
    logic [31:0] in_ptr_reg, wt_ptr_reg, thr_ptr_reg;
    

    logic layer_desc_t [NUM_LAYERS-1:0];


    // Core Interface Signals
    logic bnn_start, bnn_busy, bnn_done;
    logic [31:0] bnn_result;

    // --- Instantiate your BNN Core (The Chef) ---
    bnn_core i_bnn_core (
        .clk        (aclk),
        .rstn       (aresetn),
        .start      (bnn_start),
        .in_ptr     (in_ptr_reg),
        .wt_ptr     (wt_ptr_reg),
        .thr_ptr    (thr_ptr_reg),
        .inp_bram_addr  (inp_bram_addr),
        .inp_bram_dout  (inp_bram_dout),
        .wt_bram_addr  (wt_bram_addr),
        .wt_bram_dout  (wt_bram_dout),
        .busy       (bnn_busy),
        .done       (bnn_done),
        .result     (bnn_result)
    );

    logic aw_ready, w_ready, b_valid;
    logic ar_ready, r_valid;

    logic [31:0] status_reg;
    assign status_reg = {30'b0, bnn_done, bnn_busy};


    assign s_axi_awready = aw_ready;
    assign s_axi_wready  = w_ready;
    assign s_axi_bvalid  = b_valid;
    assign s_axi_bresp   = 2'b00; // OKAY

    assign s_axi_arready = ar_ready;
    assign s_axi_rvalid  = r_valid;
    assign s_axi_rresp   = 2'b00;

    logic [31:0] addr_read;
    logic [31:0]  addr_write;

    assign addr_read = s_axi_araddr;
    assign  addr_write = s_axi_awaddr;

    assign bnn_start = ctrl_reg[0];
    

    // --- AXI Logic (The Window) ---
    // (Include the Decoder logic here...)
    // (Use the template I gave you, but map the registers to the inputs above)

    always_ff @(posedge aclk) 


        if(aresetn == 1'b0) begin 
            ctrl_reg    <= 32'h0;
            in_ptr_reg  <= 32'h0;
            wt_ptr_reg  <= 32'h0;
            thr_ptr_reg <= 32'h0;
            aw_ready    <= 1'b0;
            w_ready     <= 1'b0;
            b_valid     <= 1'b0;
            ar_ready    <= 1'b0;
            r_valid     <= 1'b0;
            s_axi_rdata <= 32'h0;
            


        if(s_axi_bready && b_valid) begin 
            b_valid <= 1'b0;
        end 

        
        if(s_axi_awvalid && s_axi_wvalid && !aw_ready) begin 

            aw_ready <= 1'b1;
            w_ready  <= 1'b1;
            b_valid  <= 1'b1;



            case(addr_write[5:0]) 
                6'h00: ctrl_reg <= s_axi_wdata;
                6'h08: in_ptr_reg <= s_axi_wdata;
                6'h0c: wt_ptr_reg <= s_axi_wdata;
                6'h14: thr_ptr_reg <= s_axi_wdata;

                default: ;
            endcase 
        end 
        else begin 
            aw_ready <= 1'b0;
            w_ready <= 1'b0;
            

            ctrl_reg[0] <= 1'b0;
            
        end 

      



        if(s_axi_arvalid && !ar_ready) begin 

            ar_ready <= 1'b1;
            
            r_valid  <= 1'b1;

            case (addr_read[5:0])
                    6'h00: s_axi_rdata <= ctrl_reg;
                    6'h04: s_axi_rdata <= status_reg;
                    6'h08: s_axi_rdata <= in_ptr_reg;
                    6'h0C: s_axi_rdata <= wt_ptr_reg;
                    6'h14: s_axi_rdata <= thr_ptr_reg;
                    6'h10: s_axi_rdata <= bnn_result;
                    default: s_axi_rdata <= 32'h0000_0000;
            endcase
        end else begin 
            ar_ready <= 1'b0;

            if(s_axi_rready && r_valid) begin 
                r_valid <= 1'b0;

            end 
        end 
    end 



   

    
endmodule
