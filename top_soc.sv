

module top_soc(
    input logic clk,
    input logic rst,
    output logic trap,
    output [7:0] led
);


logic       pcpi_valid;
logic [31:0] pcpi_insn;
logic [31:0] pcpi_rs1;
logic   [31:0] pcpi_rs2;
logic            pcpi_wr;
logic     [31:0] pcpi_rd;
logic            pcpi_wait;
logic            pcpi_ready;
logic mem_valid;
logic mem_instr;
logic mem_ready;

logic [31:0] mem_addr;
logic [31:0] mem_wdata;
logic [ 3:0] mem_wstrb;
logic [31:0] mem_rdata;

logic [31:0] inp_bram [0: 16383];
logic [31:0] th_bram [0: 16383];

logic [31:0] bram [0:16383];

logic [13:0] bram_addr;
assign bram_addr = mem_addr[15:2];





logic mem_ready_reg;

logic [7:0] led_reg; 

assign led = led_reg;

logic select_led;
logic select_inp_bram;
logic select_th_bram;
logic select_bram;
logic select_bnn_axi;


logic [31:0] inp_bram_addr, inp_bram_dout;
logic [31:0] th_bram_addr, th_bram_dout;







/* verilator lint_off PINMISSING */
picorv32 #(
    .ENABLE_COUNTERS(1),
    .ENABLE_REGS_16_31(1),
    .ENABLE_REGS_DUALPORT (1),
    .ENABLE_PCPI(1)

) uut(
    .clk(clk),
    .resetn(!rst),
    .trap(trap),
    .mem_valid(mem_valid),
    . mem_instr(mem_instr),
    .mem_ready(mem_ready),
    .mem_addr(mem_addr),
    .mem_wdata(mem_wdata),
    .mem_wstrb(mem_wstrb),
    .mem_rdata(mem_rdata)
    
);
/* verilator lint_on PINMISSING */

//--- Intermediate Wires for AXI Handshaking ---
logic        axi_awready, axi_wready, axi_bvalid;
logic        axi_arready, axi_rvalid;
logic [31:0] axi_rdata;

// --- Accelerator Instantiation ---
bnn_axi_wrapper u_bnn_accelerator (
    .aclk          (clk),
    .aresetn       (!rst),

    
    .s_axi_awaddr  (mem_addr-32'h3000_0000),
    .s_axi_awvalid (select_bnn_axi && (|mem_wstrb) && mem_valid),
    .s_axi_awready (axi_awready),
    .s_axi_wdata   (mem_wdata),
    .s_axi_wvalid  (select_bnn_axi && (|mem_wstrb) && mem_valid),
    .s_axi_wready  (axi_wready),
    .s_axi_bvalid  (axi_bvalid),
    .s_axi_bready  (1'b1),               
    .s_axi_bresp   (/* unconnected */),

    // AXI Read Address & Data
    .s_axi_araddr  (mem_addr-32'h3000_0000),
    .s_axi_arvalid (select_bnn_axi && (~|mem_wstrb) && mem_valid),
    .s_axi_arready (axi_arready),
    .s_axi_rdata   (axi_rdata),
    .s_axi_rvalid  (axi_rvalid),
    .s_axi_rready  (1'b1),               
    .s_axi_rresp   (/* unconnected */),

    // BRAM Direct Ports (Port B)
    .inp_bram_addr (inp_bram_addr),
    .inp_bram_dout (inp_bram_dout),
    .th_bram_addr  (th_bram_addr),
    .th_bram_dout  (th_bram_dout)
   
);









always_comb begin 

    select_led = 1'b0;
    select_bram = 1'b0;
    select_inp_bram = 1'b0;
    select_th_bram = 1'b0;
    select_bnn_axi = 1'b0;
   

    if(mem_addr <= 32'h0000FFFF) begin 
        select_bram = 1'b1;
    end 
    else if ( mem_addr >=  32'h40000000 && mem_addr <= 32'h4000FFFF) begin 
        select_inp_bram = 1'b1;
    end 
    else if ( mem_addr >=  32'h50000000 && mem_addr <= 32'h5000FFFF) begin
        select_th_bram = 1'b1;
    end
    else if (mem_addr >= 32'h3000_0000 && mem_addr <= 32'h3000_02FF) begin
        select_bnn_axi = 1'b1;
    end 
    else if (mem_addr == 32'h80000000) begin 
        select_led = 1'b1;
    end 
    
end 

always_ff @(posedge clk) begin 
    if(select_led && (|mem_wstrb) && (!mem_ready ))  begin 
        led_reg <= mem_wdata [7:0];
    end 
    
end 

always_ff @(posedge clk) begin 
    inp_bram_dout <= inp_bram[inp_bram_addr[15:2]];
    
end 

always_ff @(posedge clk) begin
    th_bram_dout <= th_bram[th_bram_addr[15:2]];
    
end 



always_ff @(posedge clk) begin 
    if (rst) begin 
        mem_ready_reg <= 0;
    end 
    else begin 
        mem_ready_reg <= mem_valid && !mem_ready_reg && (!select_bnn_axi);
    

    
        
    

        if ( (select_inp_bram) && (mem_valid) ) begin 
            
            mem_rdata <= inp_bram[bram_addr];
        end 
        
        else if ( (select_bram) && (mem_valid) ) begin 
            
            mem_rdata <= bram[bram_addr];
        end
        else if ( (select_th_bram) && (mem_valid) ) begin
            mem_rdata <= th_bram[bram_addr];
        end
        else if ( (select_bnn_axi) && (mem_valid) ) begin
            mem_rdata <= axi_rdata; 
        end

        if ( select_inp_bram && mem_valid && (!mem_ready_reg) && (mem_wstrb[0] | mem_wstrb[1] | mem_wstrb[2] | mem_wstrb [3])) begin 
            
            if (mem_wstrb[0]) inp_bram[bram_addr][7:0]   <= mem_wdata[7:0];
            if (mem_wstrb[1]) inp_bram[bram_addr][15:8]  <= mem_wdata[15:8];
            if (mem_wstrb[2]) inp_bram[bram_addr][23:16] <= mem_wdata[23:16];
            if (mem_wstrb[3]) inp_bram[bram_addr][31:24] <= mem_wdata[31:24];
        end 

        if ( select_th_bram && mem_valid && (!mem_ready_reg) && (mem_wstrb[0] | mem_wstrb[1] | mem_wstrb[2] | mem_wstrb [3])) begin

            if (mem_wstrb[0]) th_bram[bram_addr][7:0]   <= mem_wdata[7:0];
            if (mem_wstrb[1]) th_bram[bram_addr][15:8]  <= mem_wdata[15:8];
            if (mem_wstrb[2]) th_bram[bram_addr][23:16] <= mem_wdata[23:16];
            if (mem_wstrb[3]) th_bram[bram_addr][31:24] <= mem_wdata[31:24];
        end
       
        if ( select_bram && mem_valid && (!mem_ready_reg) && (mem_wstrb[0] | mem_wstrb[1] | mem_wstrb[2] | mem_wstrb [3])) begin 
            
            if (mem_wstrb[0]) bram[bram_addr][7:0]   <= mem_wdata[7:0];
            if (mem_wstrb[1]) bram[bram_addr][15:8]  <= mem_wdata[15:8];
            if (mem_wstrb[2]) bram[bram_addr][23:16] <= mem_wdata[23:16];
            if (mem_wstrb[3]) bram[bram_addr][31:24] <= mem_wdata[31:24];
        end 
    end 
end

always_comb begin 

    if(select_bnn_axi) begin 
        if(|mem_wstrb) begin 
            mem_ready = axi_bvalid;
        end 
        else begin 
            mem_ready = axi_rvalid;
        end 
    end 
    else begin 
    mem_ready = mem_ready_reg;
    end 
    
end 

// Simulation Hex Preloader
initial begin
    $readmemh("bram_init.hex", bram);
end

endmodule 

            
