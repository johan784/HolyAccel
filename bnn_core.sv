

import fsm_pkg::*;
import constants_pkg::*;
import layer_pkg::*;


module bnn_core (
    
    input  logic        clk,
    input  logic        rstn,         
    input  logic        start,
    

    // Inputs BRAM Interface
    output logic [31:0] inp_bram_addr,
    input  logic [31:0] inp_bram_dout,

    

    // Threshold BRAM Interfac
    output logic [31:0] th_bram_addr,
    input  logic [31:0] th_bram_dout,

    // Control & Output Signals
    output logic        busy,
    output logic        done,
    output logic [31:0] result,
    output logic next_layer,
    input logic first_layer,
    input logic last_layer,
    output logic [119:0] score_out,

    

    
    input  logic [31:0]  current_desc_input_base,
    input  logic [31:0]  current_desc_weight_base,
    input  logic [31:0]  current_desc_threshold_base,
    input  logic [15:0]  current_desc_input_words,
    input  logic [15:0]  current_desc_output_neurons
    
);

logic enable;
logic clear_accumulator;
logic [ACCUM_WIDTH-1:0] pe_result [NUM_PE-1:0];

assign score_out = {accum_out[9],accum_out[8],accum_out[7],accum_out[6],accum_out[5],accum_out[4],accum_out[3],accum_out[2],accum_out[1],accum_out[0]}; 

logic [$clog2(NUM_PE+1):0] thresh_pe_idx;

logic [$clog2(NUM_PE+1)-1:0] BATCH_PE;

logic [$clog2(MAX_NEURONS):0] neuron_idx;

(* keep *) logic [11:0] accum_out [0:MAX_NEURONS-1];

logic signed [11:0] pe_accum [0:NUM_PE-1];

 



logic [31:0] input_words;
logic [31:0] output_neurons;

logic [$clog2(MAX_NEURONS):0] local_neuron_idx;
logic [$clog2(MAX_NEURONS):0] neuron_counter;



logic [31:0] in_ptr_reg;

logic [31:0] thr_ptr_reg;



logic act_select;
logic wt_select;


// internal State Registers
logic [4:0] state;
   
logic [WORD_WIDTH-1:0]    word_idx;     // Tracks 0..(TOTAL_WORDS-1)
logic [WORD_WIDTH-1:0]    activ_word_idx;
logic [9:0] wt_shared_addr;                  






    
    integer file, status, n;
    logic [31:0] hex_line;
    logic [31:0] sram_init_din;
    logic [9:0] init_addr;
    


    
`ifndef SYNTHESIS
    initial begin
        sram_init_we = 1'b0;
        sram_init_ce = 1'b0;
        sram_init_din = '0;
        
        file = $fopen("models/weight_bank.hex", "r");
        if (!file) $fatal(1, "Cannot open weight_bank.hex!");

       
        sram_init_we = 1'b1;
        sram_init_ce = 1'b1;
        
        for (n = 0; n < 1024; n++) begin
            status = $fscanf(file, "%h\n", hex_line);
            init_addr = n[9:0]; // Drive the 10-bit address
            sram_init_din = hex_line; 
            
          
            @(posedge clk); 
        end
        
        sram_init_we = 1'b0;
        sram_init_ce = 1'b0;
        $fclose(file);
        $display("SUCCESS: Loaded 1024 words into 16 SRAM macros.");

        
    end
`endif


`ifdef SYNTHESIS
always_comb begin
    sram_init_ce = 1'b0;   // Port 0 chip-select off  (csb0 = 1)
    sram_init_we = 1'b0;   // Port 0 write off        (web0 = 1)
end
`endif
   

(* keep *) logic [31:0] activation_buffer_A [0:TOTAL_WORDS-1];
(* keep *) logic [31:0] activation_buffer_B [0:TOTAL_WORDS-1];

(*keep *) logic [31:0] weights_buffer_A [0:NUM_PE-1][0:TOTAL_WORDS-1];
(* keep *) logic  [31:0] weights_buffer_B [0:NUM_PE-1][0:TOTAL_WORDS-1];

(* keep *) logic signed [ACCUM_WIDTH-1:0] threshold_buffer [0:NUM_PE-1];
logic [4:0] weight_offset;

genvar i;
integer j;
integer k;
integer g;




  generate 
    for(i=0;i<NUM_PE;i++) begin: pe_array
        processing_element pe (
                .clk(clk),
                .rstn(rstn),
                .activations_buffer(
                act_select ?
                    activation_buffer_A[word_idx] :
                    activation_buffer_B[word_idx]
            ),
                .weight_buffer(
                    wt_select ?
                    weights_buffer_A[i][word_idx] :
                    weights_buffer_B[i][word_idx]
            ),
                .threshold(threshold_buffer[i]),
                .enable(enable),
                .clear_accumulator(clear_accumulator),
                .neuron_value(pe_result[i]),
                .accumulator(pe_accum[i])
            );
    end 
endgenerate 

  
    logic wt_issue; 
    

    

    // --- SRAM Macro Instantiation ---
                 
    logic [31:0] wt_dout_0 [0:NUM_PE-1];         // Data out from Bank 0 (Words 0-511)
    logic [31:0] wt_dout_1 [0:NUM_PE-1];         // Data out from Bank 1 (Words 512-1023)
    logic sram_init_we;                          // Used ONLY by simulation preloader
    logic sram_init_ce;     
    
    
    assign wt_shared_addr = sram_init_ce ? init_addr : wt_rd_addr;                     // Used ONLY by simulation preloader

    genvar p;
generate
    for (p = 0; p < NUM_PE; p++) begin : gen_sram_pe
        // Bank 0: Words 0 to 511
       (* keep *) sky130_sram_2kbyte_1rw1r_32x512_8 u_bank0 (
            .clk0(clk), 
            .csb0(~sram_init_ce),        // ON during init, asleep after
            .web0(~sram_init_we),        // Write mode during init
            .wmask0(4'hF), 
            .addr0(wt_shared_addr[8:0]), 
            .din0(sram_init_din),        // Data IN for preloader
            .dout0(),                    // Unused (we read from Port 1)
            
            .clk1(clk), 
            .csb1(1'b0),                 // ALWAYS ON (for compute reads)
            .addr1(wt_shared_addr[8:0]), // FSM puts read address here
            .dout1(wt_dout_0[p])      // FSM reads weights from here!
            
           
        );
        
        // Bank 1: Words 512 to 1023
        (* keep *) sky130_sram_2kbyte_1rw1r_32x512_8 u_bank1 (
            .clk0(clk), 
            .csb0(~sram_init_ce), 
            .web0(~sram_init_we), 
            .wmask0(4'hF), 
            .addr0(wt_shared_addr[8:0]), 
            .din0(sram_init_din), 
            .dout0(), 
            
            .clk1(clk), 
            .csb1(1'b0), 
            .addr1(wt_shared_addr[8:0]), 
            .dout1(wt_dout_1[p])        // FSM reads weights from here!
            
           
        );
    end
endgenerate


logic wt_rd_en;
logic [9:0] wt_rd_addr;
logic wt_fill_A;
logic wt_rd_valid_q;
logic [4:0] wt_rd_word_q;
logic wt_rd_to_A_q;
logic  [9:0] wt_rd_addr_q;
logic [NUM_PE-1:0] pe_bit;
 
always_comb begin 
    wt_rd_en = 1'b0;
    wt_rd_addr ='0;
    wt_fill_A = wt_select;
    case(state) 
            INITIAL_FETCH_WEIGHTS: begin 
                wt_rd_en =1'b1;
                wt_rd_addr = {weight_offset + local_neuron_idx[4:0], word_idx[4:0]};
                wt_fill_A = wt_select;

            end 

            COMPUTE: begin 
                if(neuron_counter + BATCH_PE < output_neurons) begin 
                    wt_rd_en =1'b1;
                    wt_rd_addr = {weight_offset + local_neuron_idx[4:0] + 5'd1, word_idx[4:0]};
                    wt_fill_A = ~wt_select;
                end 
            end 
            default: ;
    endcase 
end 
    always_ff @(posedge clk) begin
        if (!rstn) begin
            wt_rd_addr_q <= '0;
            wt_rd_valid_q  <= 1'b0;
            wt_rd_word_q   <= '0;
            wt_rd_to_A_q   <= 1'b0;
        end else begin
            wt_rd_addr_q <= wt_rd_addr;
            wt_rd_valid_q  <= wt_rd_en;
            wt_rd_word_q   <= wt_rd_addr[4:0];
            wt_rd_to_A_q   <= wt_fill_A;
        end
    end

    always_ff @(posedge clk) begin
        if (wt_rd_valid_q) begin
            for (int g = 0; g < NUM_PE; g++) begin
                if (g < BATCH_PE) begin
                    if (wt_rd_to_A_q) weights_buffer_A[g][wt_rd_word_q] <= final_wt_dout[g];
                    else              weights_buffer_B[g][wt_rd_word_q] <= final_wt_dout[g];
                end
            end
        end
    end


    // If address >= 512, bit [9] is 1. Route to Bank 1, else Bank 0.
    logic [31:0] final_wt_dout [0:NUM_PE-1];
    generate
        for (p = 0; p < NUM_PE; p++) begin : gen_mux
            assign final_wt_dout[p] = (wt_rd_addr_q[9] == 1'b1) ? wt_dout_1[p] : wt_dout_0[p];
        end
    endgenerate



always_comb begin
    for (int b = 0; b < NUM_PE; b++) begin
        pe_bit[b] = pe_result[b][0]; // Grab just the lowest bit (0 or 1)
    end
end

integer gn; // "Global Neuron" ID

 assign next_layer = (state == LOAD_OUTPUT)
                 && ((neuron_counter + BATCH_PE) >= output_neurons)
                 && !last_layer;




always_ff @(posedge clk) begin

    `ifdef BNN_DEBUG
            $display("state=%0d busy=%b done=%b  word=%0d",
                state, busy, done, word_idx);
    `endif

        if (rstn == 1'b0) begin
            state         <= RESET;
            
        end 

        else begin
            case (state)

                RESET: begin 
                    in_ptr_reg          <= '0;
                    
                    thr_ptr_reg         <= '0;

                    input_words     <= '0;
                    output_neurons  <= '0;
                    BATCH_PE <= '0;

                    
                    word_idx        <= '0;
                    neuron_idx      <= '0;
                    local_neuron_idx <= '0;
                    

                    done            <= 1'b0;
                    busy <=1'b0;
                    
                    

                    state      <= IDLE;
                    result     <= '0;
                    thresh_pe_idx <= '0;
                    wt_select <= '0;
                    


                    act_select <= '0;
                end 


                IDLE: begin
                

                    if (start) begin
                        
                        word_idx      <= '0;
                        busy          <= 1'b1;
                        state         <= CONFIG_LAYER;
                        done          <=1'b0;
                        
                        activ_word_idx <= '0;
                        
                       
                        

                        
                        
                    end
                end

                CONFIG_LAYER: begin
                        `ifdef BNN_DEBUG
                           $display(">>> CONFIG_LAYER: weight_base = %0d, input_words = %0d, output_neurons = %0d", 
                                current_desc_weight_base, current_desc_input_words, current_desc_output_neurons);
                        `endif
                        in_ptr_reg         <= current_desc_input_base;
                        
                        thr_ptr_reg        <= current_desc_threshold_base;
                        input_words    <= current_desc_input_words;
                        output_neurons <= current_desc_output_neurons;
                        word_idx       <= '0;
                        neuron_idx     <= '0;
                        weight_offset <= current_desc_weight_base[4:0];
                        activ_word_idx <='0;
                        neuron_counter <='0;
                        thresh_pe_idx <='0;
    

                       


                        // Replace the for-loop inside CONFIG_LAYER with this unrolled logic:
                        if (0 < ((current_desc_output_neurons + 31) >> 5)) begin
                            if (act_select) activation_buffer_B[0] <= '0;
                            else            activation_buffer_A[0] <= '0;
                        end 
                        if (1 < ((current_desc_output_neurons + 31) >> 5)) begin
                            if (act_select) activation_buffer_B[1] <= '0;
                            else            activation_buffer_A[1] <= '0;
                        end 
                        if (2 < ((current_desc_output_neurons + 31) >> 5)) begin
                            if (act_select) activation_buffer_B[2] <= '0;
                            else            activation_buffer_A[2] <= '0;
                        end 
                        if (3 < ((current_desc_output_neurons + 31) >> 5)) begin
                            if (act_select) activation_buffer_B[3] <= '0;
                            else            activation_buffer_A[3] <= '0;
                        end 
                        if (4 < ((current_desc_output_neurons + 31) >> 5)) begin
                            if (act_select) activation_buffer_B[4] <= '0;
                            else            activation_buffer_A[4] <= '0;
                        end 
                        if (5 < ((current_desc_output_neurons + 31) >> 5)) begin
                            if (act_select) activation_buffer_B[5] <= '0;
                            else            activation_buffer_A[5] <= '0;
                        end 
                        if (6 < ((current_desc_output_neurons + 31) >> 5)) begin
                            if (act_select) activation_buffer_B[6] <= '0;
                            else            activation_buffer_A[6] <= '0;
                        end 
                        if (7 < ((current_desc_output_neurons + 31) >> 5)) begin
                            if (act_select) activation_buffer_B[7] <= '0;
                            else            activation_buffer_A[7] <= '0;
                        end 

                        inp_bram_addr <= current_desc_input_base;
                        th_bram_addr  <= current_desc_threshold_base;
                        
                        if (current_desc_output_neurons <= NUM_PE) begin
                            BATCH_PE <= current_desc_output_neurons;
                        end else begin
                        BATCH_PE <= NUM_PE;
                        end 

                        if(first_layer) begin 
                            state<= WAIT;
                        end else begin 
                            state<= INITIAL_FETCH_WEIGHTS;
                        end 

                        local_neuron_idx <= '0;

                        
                        


                end 

                WAIT: begin
                    state <= FETCH_ACTIVATIONS;
                end

                FETCH_ACTIVATIONS: begin 

                    if(act_select) begin 
                        if(activ_word_idx<input_words-1) begin
                            activation_buffer_A[activ_word_idx] <= inp_bram_dout;

                            activ_word_idx<= activ_word_idx+1;
                            inp_bram_addr <= inp_bram_addr + 32'd4;
                        end 
                    

                        else if(activ_word_idx == input_words-1) begin 
                            activation_buffer_A[activ_word_idx] <= inp_bram_dout;
                            
                            state<= INITIAL_FETCH_WEIGHTS; 
                        end 
                    end else begin 
                        if(activ_word_idx<input_words-1) begin
                            activation_buffer_B[activ_word_idx] <= inp_bram_dout;

                            activ_word_idx<= activ_word_idx+1;
                            inp_bram_addr <= inp_bram_addr + 32'd4;
                        end 

                        else if(activ_word_idx == input_words-1) begin 
                            activation_buffer_B[activ_word_idx] <= inp_bram_dout;
                            
                            state<= INITIAL_FETCH_WEIGHTS;
                        end 
                    end
                end 

                INITIAL_FETCH_WEIGHTS: begin 

                        if (word_idx == input_words - 1) begin
                            state    <= FETCH_THRESHOLDS;
                            word_idx <= '0;
                        end else begin 
                            word_idx <= word_idx  + 1;
                        end 
                end 

                 

                FETCH_THRESHOLDS : begin 

                    word_idx <=0;

                    // In FETCH_THRESHOLDS:
                    `ifdef BNN_DEBUG
                        $display(">>> TH LOAD: pe=%0d th=%0d", thresh_pe_idx, th_bram_dout);
                    `endif


                    if (thresh_pe_idx < BATCH_PE) begin
                        threshold_buffer[thresh_pe_idx] <= th_bram_dout;
                        th_bram_addr <= th_bram_addr + 32'd4;
                        thresh_pe_idx <= thresh_pe_idx + 1;
                    end

                    else  begin
                                
                        state <= COMPUTE;
                    end

                end

                COMPUTE: begin
                         // -------------------------------
                        // COMPUTE PROGRESS
                        // -------------------------------

                        if (word_idx == input_words-1) begin

                            word_idx <= '0;

                            wt_select <= ~wt_select;

                            local_neuron_idx <= local_neuron_idx + 1;

                            state <= LOAD_OUTPUT;

                        end
                        else begin

                            word_idx <= word_idx + 1;

                        end

                end
                LOAD_OUTPUT: begin 


                    if(last_layer) begin 
                        for(k=0;k<NUM_PE;k++) begin 
                            if(k<BATCH_PE) begin 
                                gn = neuron_counter +k;
                                accum_out[gn] <= pe_accum[k];
                            end 
                        end 
                    end 

                    

                    if (act_select) begin
                        // Writing to Buffer B
                        for (k = 0; k < NUM_PE; k++) begin       // Constant bound for synthesis
                            if (k < BATCH_PE) begin              // Runtime guard
                                gn = neuron_counter + k;         // Which neuron is this?
                                // Park it: Word = gn / 32, Bit = gn % 32
                                activation_buffer_B[gn >> 5][gn[4:0]] <= pe_bit[k]; 
                            end
                        end
                    end else begin 
                        // Writing to Buffer A
                        for (k = 0; k < NUM_PE; k++) begin       // Constant bound for synthesis
                            if (k < BATCH_PE) begin              // Runtime guard
                                gn = neuron_counter + k;         // Which neuron is this?
                                // Park it: Word = gn / 32, Bit = gn % 32
                                activation_buffer_A[gn >> 5][gn[4:0]] <= pe_bit[k]; 
                            end
                        end
                    end 

                    neuron_counter <= neuron_counter + BATCH_PE;

                    if (neuron_counter + BATCH_PE >= output_neurons) begin 
                        // LAYER IS DONE
                        if (last_layer) begin
                            state <= READY;
                        end else begin 
                            act_select <= ~act_select;
                            
                            state      <= CONFIG_LAYER;
                        end
                    end 
                    else begin 
                        // MORE BATCHES TO DO
                        thr_ptr_reg <= current_desc_threshold_base + (neuron_counter + BATCH_PE) * 4;
                        th_bram_addr <= current_desc_threshold_base + (neuron_counter + BATCH_PE) * 4;
                        thresh_pe_idx <= '0;

                        if ((output_neurons - (neuron_counter + BATCH_PE)) >= NUM_PE) begin 
                            BATCH_PE <= NUM_PE;
                        end else begin 
                            BATCH_PE <= output_neurons - (neuron_counter + BATCH_PE);
                        end 
                        
                        state <= FETCH_THRESHOLDS;
                    end 
                end
                

                
                READY: begin
                    busy   <= 1'b0;
                    done   <= 1'b1;
                    
                    state  <= IDLE;
                end

                default: begin 
                    state <= IDLE;
                end 

            endcase
        end
    end

always_comb begin
    enable = (state == COMPUTE);
end

always_comb begin 
    clear_accumulator = 0;

    if((state == IDLE) && start) begin 
        clear_accumulator =1;
    end 
    else if ( state == LOAD_OUTPUT) begin   
        clear_accumulator = 1;
    end   

end 


endmodule
