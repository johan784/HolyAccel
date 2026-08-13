parameter int MAX_LAYERS = 16;

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

    input logic [11:0] pe_accum,
    
    input layer_desc_t current_desc
    
);

logic enable;
logic clear_accumulator;
logic [ACCUM_WIDTH-1:0] pe_result [NUM_PE-1:0];

logic [$clog2(NUM_PE+1):0] thresh_pe_idx;

logic [$clog2(NUM_PE+1)-1:0] BATCH_PE;

logic [$clog2(MAX_NEURONS):0] neuron_idx;

logic [11:0] accum_out [0:MAX_NEURONS-1];


logic [31:0] input_words;
logic [31:0] output_neurons;

logic [$clog2(MAX_NEURONS):0] local_neuron_idx;
logic [$clog2(MAX_NEURONS):0] neuron_counter;



logic [31:0] in_ptr_reg;

logic [31:0] thr_ptr_reg;

logic act_select;
logic wt_select;


// internal State Registers
state_t state;
   
logic [WORD_WIDTH-1:0]    word_idx;     // Tracks 0..(TOTAL_WORDS-1)
logic [WORD_WIDTH-1:0]    activ_word_idx;


logic [31:0] weight_bank
             [0:NUM_PE-1]
             [0:MAX_NEURONS_PER_BANK-1]
             [0:TOTAL_WORDS-1];



   

logic [31:0] activation_buffer_A [0:TOTAL_WORDS-1];
logic [31:0] activation_buffer_B [0:TOTAL_WORDS-1];

logic [31:0] weights_buffer_A [0:NUM_PE-1][0:TOTAL_WORDS-1];
logic [31:0] weights_buffer_B [0:NUM_PE-1][0:TOTAL_WORDS-1];

logic signed [ACCUM_WIDTH-1:0] threshold_buffer [0:NUM_PE-1];
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
                .neuron_value(pe_result[i])
                .accumulator(pe_accum[i])
            );
    end 
endgenerate 

// Extract the 1-bit binary output from each PE
logic [NUM_PE-1:0] pe_bit;

always_comb begin
    for (int b = 0; b < NUM_PE; b++) begin
        pe_bit[b] = pe_result[b][0]; // Grab just the lowest bit (0 or 1)
    end
end

integer gn; // "Global Neuron" ID

 assign next_layer = (state == LOAD_OUTPUT)
                 && ((neuron_counter + BATCH_PE) >= output_neurons)
                 && !last_layer;



// --- Sequential Logic Block ---
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

                           $display(">>> CONFIG_LAYER: weight_base = %0d, input_words = %0d, output_neurons = %0d", 
                                current_desc.weight_base, current_desc.input_words, current_desc.output_neurons);

                        in_ptr_reg         <= current_desc.input_base;
                        
                        thr_ptr_reg        <= current_desc.threshold_base;
                        input_words    <= current_desc.input_words;
                        output_neurons <= current_desc.output_neurons;
                        word_idx       <= '0;
                        neuron_idx     <= '0;
                        weight_offset <= current_desc.weight_base[4:0];
                        activ_word_idx <='0;
                        neuron_counter <='0;
                        thresh_pe_idx <='0;
    

                        for (int w = 0; w < 8; w++) begin
                            // Calculate how many 32-bit words this layer will output
                            if (w < ((current_desc.output_neurons + 31) >> 5)) begin
                                if (act_select) activation_buffer_B[w] <= '0;
                                else            activation_buffer_A[w] <= '0;
                            end 
                        end

                        inp_bram_addr <= current_desc.input_base;
                        th_bram_addr  <= current_desc.threshold_base;
                        
                        if (current_desc.output_neurons <= NUM_PE) begin
                            BATCH_PE <= current_desc.output_neurons;
                        end else begin
                        BATCH_PE <= NUM_PE;
                        end 

                        if(first_layer) begin 
                            state<= WAIT;
                        end else begin 
                            state<= INITIAL_FETCH_WEIGHTS;
                        end 

                        local_neuron_idx <= '0;

                        
                        for (int w = 0; w < BATCH_PE; w++) begin
                            if (act_select) activation_buffer_B[w] <= '0;
                            else            activation_buffer_A[w] <= '0;
                        end


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

                    if (word_idx == 0) begin
                        $display(">>> RTL FETCH: offset=%0d + local=%0d => ACTUAL slot=%0d (desc says %0d)",
                        weight_offset, local_neuron_idx,
                        weight_offset + local_neuron_idx,
                        current_desc.weight_base[4:0]);
                    end

                    // In INITIAL_FETCH_WEIGHTS, next to your other print:
                    if (word_idx == 0)
                        $display(">>> L1 CHECK: first weight word fetched = %h", weights_buffer_B[0][0]);



                    
                    if(wt_select) begin
                        for(g=0;g<BATCH_PE;g++) begin

                               weights_buffer_A[g][word_idx]<=weight_bank[g][weight_offset + local_neuron_idx][word_idx];
                        end

                        word_idx <= word_idx +1;

                        if (word_idx == input_words - 1) begin
                            state    <= FETCH_THRESHOLDS;
                            word_idx <= '0;
                        end

                    end else begin
                        for(g=0;g<BATCH_PE;g++) begin

                                weights_buffer_B[g][word_idx] <= weight_bank[g][weight_offset + local_neuron_idx][word_idx];
                        end

                        word_idx <= word_idx + 1;

                        if (word_idx == input_words - 1) begin
                            state    <= FETCH_THRESHOLDS;
                            word_idx <= '0;
                        end
                        
                    end
                end 

                 

                FETCH_THRESHOLDS : begin 

                    // In FETCH_THRESHOLDS:
                    $display(">>> TH LOAD: pe=%0d th=%0d", thresh_pe_idx, th_bram_dout);


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
                        // PARALLEL PREFETCH
                        // -------------------------------
                        if(neuron_counter + BATCH_PE < output_neurons) begin 

                            if (wt_select) begin
                                // Compute is reading Buffer B
                                // Prefetch next batch into Buffer A

                                for (g = 0; g < BATCH_PE; g++) begin
                                    weights_buffer_B[g][word_idx]
                                        <= weight_bank[g][weight_offset+ local_neuron_idx + 1][word_idx];
                                end
                            end 
                                else begin
                                    // Compute is reading Buffer A
                                    // Prefetch next batch into Buffer B

                                    for (g = 0; g < BATCH_PE; g++) begin
                                        weights_buffer_A[g][word_idx]
                                            <= weight_bank[g][weight_offset + local_neuron_idx + 1][word_idx];
                                    end

                                end
                            end
                        

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
                                gn <= neuron_counter +k;
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
                        thr_ptr_reg <= current_desc.threshold_base + (neuron_counter + BATCH_PE) * 4;
                        th_bram_addr <= current_desc.threshold_base + (neuron_counter + BATCH_PE) * 4;
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
