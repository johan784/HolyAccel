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

    // Weights BRAM Interface
    output logic [31:0] wt_bram_addr,
    input  logic [31:0] wt_bram_dout,

    // Control & Output Signals
    output logic        busy,
    output logic        done,
    output logic [31:0] result
    
);

logic enable;
logic clear_accumulator;
logic [ACCUM_WIDTH-1:0] pe_result [NUM_PE-1:0];
logic layer_done;
logic [31:0] output_buffer [NUM_PE-1:0];

layer_desc_t layer_table [0:7];

logic [31:0] in_ptr_reg;
logic [31:0] wt_ptr_reg;
logic [31:0] thr_ptr_reg;





// internal State Registers
state_t state;
   
logic [WORD_WIDTH-1:0]    word_idx;     // Tracks 0..(TOTAL_WORDS-1)
logic [WORD_WIDTH-1:0]    activ_word_idx;
logic [WORD_WIDTH-1:0]    wt_word_idx;
logic [$clog2(NUM_PE)-1:0] pe_idx;

   

logic [31:0] activation_buffer [0:TOTAL_WORDS-1];
logic [31:0] weights_buffer [0:NUM_PE-1] [0:TOTAL_WORDS-1];

logic signed [ACCUM_WIDTH-1:0] threshold_buffer [0:NUM_PE-1];



genvar i;
integer j;


generate 
    for(i=0;i<NUM_PE;i++) begin: pe_array
        processing_element pe (
                .clk(clk),
                .rstn(rstn),
                .activations_buffer(activation_buffer[word_idx]),
                .weights_buffer(weights_buffer[i][word_idx]),
                .threshold(threshold_buffer[i]),
                .enable(enable),
                .clear_accumulator(clear_accumulator),
                .neuron_value(pe_result[i])
            );
    end 
endgenerate 

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
                    wt_ptr_reg         <= '0;
                    thr_ptr_reg         <= '0;

                    input_words     <= '0;
                    output_neurons  <= '0;

                    layer_idx       <= '0;
                    word_idx        <= '0;
                    neuron_idx      <= '0;

                    done            <= 1'b0;
                    enable          <= 1'b0;
                    clear_accumulator <= 1'b0;

                    next_state      <= CONFIG_LAYER;
                end 


                IDLE: begin
                

                    if (start) begin
                        
                        word_idx      <= '0;
                        busy          <= 1'b1;
                        state         <= WAIT;
                        done          <=1'b0;
                        layer_done <= 1'b0;
                        activ_word_idx <= '0;
                        wt_word_idx <= '0;
                        pe_idx <='0;
                        

                        // drive initial BRAM address read request
                        inp_bram_addr <= in_ptr_reg;
                        wt_bram_addr  <= wt_ptr_reg;
                    end
                end

                CONFIG_LAYER: begin

                        current_desc <= layer_table[layer_idx];

                        in_ptr_reg         <= layer_table[layer_idx].input_base;
                        wt_ptr_reg         <= layer_table[layer_idx].weight_base;
                        thr_ptr_re        <= layer_table[layer_idx].threshold_base;

                        input_words    <= layer_table[layer_idx].input_words;
                        output_neurons <= layer_table[layer_idx].output_neurons;

                        word_idx       <= '0;
                        neuron_idx     <= '0;

                        next_state     <= IDLE;

                end 

                WAIT: begin
                    state <= FETCH_ACTIVATIONS;
                end

                FETCH_ACTIVATIONS: begin 

                    if(activ_word_idx<TOTAL_WORDS-1) begin
                        activation_buffer[activ_word_idx] <= inp_bram_dout;

                        activ_word_idx<= activ_word_idx+1;
                        inp_bram_addr <= inp_bram_addr + 32'd4;
                    end 

                    else if(activ_word_idx == TOTAL_WORDS-1) begin 
                        activation_buffer[activ_word_idx] <= inp_bram_dout;
                        state<= FETCH_WEIGHTS;
                    end 
                end 

                FETCH_WEIGHTS: begin 
                    

                        if (pe_idx < NUM_PE) begin

                            if (wt_word_idx < TOTAL_WORDS-1) begin

                                weights_buffer[pe_idx][wt_word_idx] <= wt_bram_dout;

                                wt_word_idx <= wt_word_idx + 1;
                                wt_bram_addr <= wt_bram_addr + 32'd4;

                            end

                            else begin
                                
                                weights_buffer[pe_idx][wt_word_idx] <= wt_bram_dout;

                                // Move to the next neuron
                                pe_idx      <= pe_idx + 1;
                                wt_word_idx <= '0;

                                // First weight of next neuron
                                wt_bram_addr <= wt_bram_addr + 32'd4;
                            end

                        end

                        else begin
                            state <= COMPUTE;
                        end

                end



                COMPUTE: begin 
                    
                        if ((32'(word_idx)) < (TOTAL_WORDS - 1)) begin
                                
                                word_idx <= word_idx + 1;
                        end 
                        else if ((32'(word_idx)) == (TOTAL_WORDS - 1)) begin
                               
                               state<= LOAD_OUTPUT;
                        end 
                end 

                LOAD_OUTPUT: begin 
                    
    
                READY: begin
                    busy   <= 1'b0;
                    done   <= 1'b1;
                    
                    
                    state  <= IDLE;
                end

                default: state <= IDLE;
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
end 

always_ff @(posedge clk) begin  
    if(layer_done) begin 
        for(i=0;i<NUM_PE;i++) begin 
            output_buffer[i] = pe_result[j];
        end 
    end 
end 

endmodule
