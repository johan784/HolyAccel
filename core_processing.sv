import fsm_pkg::*;
import constants_pkg::*;

module processing_element( 

    input logic clk,
    input logic rstn,

    input logic [31:0] activations_buffer,
    input logic  [31:0] weight_buffer,
    input logic signed [ACCUM_WIDTH-1:0] threshold,

    output logic signed [ACCUM_WIDTH-1:0]  neuron_value,
    input logic enable,
    input logic clear_accumulator,

    output logic signed  [ACCUM_WIDTH-1:0] accumulator
);


logic [31:0] xnor_result;

logic [1:0] stage1 [0:15];
logic [2:0] stage2 [0:7];
logic [3:0] stage3 [0:3];
logic [4:0] stage4 [0:1];
integer i;

logic [5:0] sum_reg;



logic [31:0] inp;
assign inp= activations_buffer;


logic [31:0] wt;
assign wt = weight_buffer;





always_ff @(posedge clk) begin 

    if(!rstn) begin 
        accumulator <= '0;
    end 

    else if(clear_accumulator) begin 
        accumulator <= '0;
    end

    else begin 
        if(enable)
            accumulator <= accumulator + {{(ACCUM_WIDTH-6){1'b0}}, sum_reg};
            
        end 
    end 


always_comb begin 

       
        
            
                xnor_result = ~(inp ^ wt);

                for(i=0;i<16;i++) begin 
                stage1[i] = xnor_result[2*i] + xnor_result[2*i+1];
                end  

                for(i=0;i<8;i++) begin 
                stage2[i] = stage1[2*i] + stage1[2*i+1];
                end 

                for(i=0;i<4;i++) begin 
                    stage3[i] = stage2[2*i] + stage2[2*i+1];
                end 

                for(i=0;i<2;i++) begin 
                    stage4[i] = stage3[2*i] + stage3[(2*i)+1];
                end 

                sum_reg = stage4[0] + stage4[1];
                
end 

always_comb begin 
    if(accumulator > threshold) begin
        neuron_value = 1;
    end
    else begin 
        neuron_value = 0;
    end
end
endmodule
