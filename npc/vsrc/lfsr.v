module lfsr #(  parameter integer  W = 5,
                parameter [W-1:0]  POLY = 5'h12,//1'h1,2'h3,3'h6,4'hC,5'h12,6'h30
                parameter [W-1:0]  SEED = 5'h1 )
(

    input clk,
    input rst,
    input en,
    output reg [W - 1 : 0] q

);


    wire lsb = q[0];

    always @(posedge clk) begin
        if(rst)begin
            q <= (SEED != 0) ? SEED : {{W-1{1'b0}},1'b1};
        end else if(en)begin
            if(q == {W{1'b0}})begin
                q <= (SEED != 0) ? SEED : {{W-1{1'b0}},{1'b1}};
            end else begin
                q <= (q >> 1) ^ (lsb ? POLY : {W{1'b0}});
            end
            
        end
    end



endmodule
