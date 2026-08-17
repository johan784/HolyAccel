import constants_pkg::*;
import layer_pkg ::*;


module bnn_axi_wrapper #(parameter int MAX_LAYERS = 16)(
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
    output logic [1:0]  s_axi_rresp,
    
    output logic [31:0] th_bram_addr,
    output logic [31:0] inp_bram_addr,
    input  logic [31:0] th_bram_dout,
    input  logic [31:0] inp_bram_dout,
    // BRAM Interface (Pass-through to your SoC memory)
    
    
    
    
    output layer_desc_t current_desc

);

    logic [119:0] score_out;

    layer_desc_t  layer_table [0:MAX_LAYERS-1];

    localparam logic [31:0] DESCRIPTOR_BASE = 32'h100;
    logic [31:0] descriptor_offset;
    logic [$clog2(MAX_LAYERS)-1:0] descriptor_index;
    logic [4:0] field_offset;

    // Register Map
    logic [31:0] ctrl_reg;
    logic [$clog2(MAX_NEURONS_PER_BANK)-1:0] local_neuron_idx;

   
    logic [31:0] num_layers;
    logic [$clog2(MAX_LAYERS)-1:0] current_layer;
    assign current_desc = layer_table[current_layer];


    logic first_layer;
    assign first_layer = (current_layer == 0);

    logic last_layer;

    assign last_layer =
    (current_layer == num_layers - 1);

    logic next_layer;

    

    


    // Core Interface Signals
    logic bnn_start, bnn_busy, bnn_done;
    logic [31:0] bnn_result;

    // --- Instantiate your BNN Core (The Chef) ---
    bnn_core i_bnn_core (
        .clk        (aclk),
        .rstn       (aresetn),
        .start      (bnn_start),
        .inp_bram_addr  (inp_bram_addr),
        .inp_bram_dout  (inp_bram_dout),

        .th_bram_addr   (th_bram_addr),
        .th_bram_dout   (th_bram_dout), 
        
        .busy       (bnn_busy),
        .done       (bnn_done),
        .result     (bnn_result),
        .first_layer (first_layer),
        .last_layer (last_layer),
        .next_layer (next_layer),
        .score_out (score_out),
        
        .current_desc(current_desc)
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

    always_ff @(posedge aclk) begin

    if (!aresetn) begin
        ctrl_reg       <= 32'h0;
        aw_ready       <= 1'b0;
        w_ready        <= 1'b0;
        b_valid        <= 1'b0;
        ar_ready       <= 1'b0;
        r_valid        <= 1'b0;
        s_axi_rdata    <= 32'h0;
        num_layers     <= '0;
        current_layer  <= '0;
    end
    else begin

        //--------------------------------------------------
        // Write response channel
        //--------------------------------------------------
        if (s_axi_bready && b_valid)
            b_valid <= 1'b0;

        //--------------------------------------------------
        // Write address/data channel
        //--------------------------------------------------
        if (s_axi_awvalid && s_axi_wvalid && !aw_ready) begin

            aw_ready <= 1'b1;
            w_ready  <= 1'b1;
            b_valid  <= 1'b1;

            if (addr_write < DESCRIPTOR_BASE) begin

                case (addr_write[5:0])
                    6'h00: ctrl_reg   <= s_axi_wdata;
                    6'h08: num_layers <= s_axi_wdata;
                    default: ;
                endcase

            end
            else begin

                if (descriptor_index < MAX_LAYERS) begin

                    case (field_offset)
                        5'd0  : layer_table[descriptor_index].input_base      <= s_axi_wdata;
                        5'd4  : layer_table[descriptor_index].weight_base     <= s_axi_wdata;
                        5'd8  : layer_table[descriptor_index].threshold_base  <= s_axi_wdata;
                        5'd12 : layer_table[descriptor_index].input_words     <= s_axi_wdata;
                        5'd16 : layer_table[descriptor_index].output_neurons  <= s_axi_wdata;
                        default: ;
                    endcase

                end

            end

        end
        else begin

            aw_ready <= 1'b0;
            w_ready  <= 1'b0;

            // Self-clear START bit
            ctrl_reg[0] <= 1'b0;

        end

        //--------------------------------------------------
        // Read channel
        //--------------------------------------------------
        if (s_axi_arvalid && !ar_ready) begin

            ar_ready <= 1'b1;
            r_valid  <= 1'b1;

            case (addr_read[5:0])
                6'h00: s_axi_rdata <= ctrl_reg;
                6'h04: s_axi_rdata <= status_reg;
                6'h10: s_axi_rdata <= bnn_result;
                6'h20: s_axi_rdata <= {8'b0, score_out[23:12],  score_out[11:0]};
                6'h24: s_axi_rdata <= {8'b0, score_out[47:36],  score_out[35:24]};
                6'h28: s_axi_rdata <= {8'b0, score_out[71:60],  score_out[59:48]};
                6'h2C: s_axi_rdata <= {8'b0, score_out[95:84],  score_out[83:72]};
                6'h30: s_axi_rdata <= {8'b0, score_out[119:108],score_out[107:96]};
                default: s_axi_rdata <= 32'h0000_0000;
            endcase

        end
        else begin

            ar_ready <= 1'b0;

            if (s_axi_rready && r_valid)
                r_valid <= 1'b0;

        end

    end

end

    always_comb begin

        descriptor_offset = 32'd0;
        descriptor_index  = '0;
        field_offset      = '0;

        if (addr_write >= DESCRIPTOR_BASE) begin

            descriptor_offset = addr_write - DESCRIPTOR_BASE;
            descriptor_index  = descriptor_offset >> 5;
            field_offset      = descriptor_offset[4:0];

        end

    end 

always_ff @(posedge aclk) begin 
    if(next_layer ==1) begin 
        current_layer <= current_layer +1;
    end

    else if (!aresetn) begin 
        current_layer <='0;
    end else if(bnn_start) begin 
        current_layer <='0;
    end 

end 







   

    
endmodule
