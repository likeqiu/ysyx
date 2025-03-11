module top(
    input  clk,
    input [2:0] select,
    input [3:0] a,b,
    output reg [3:0] result,
    output reg zero,
    output reg cin,
    output reg overflow,
    output reg compare_out,
    output reg [6:0] seg0
);


ALU test(.clk(clk),.select(select),.a(a),.b(b),.result(result),.zero(zero),.cin(cin),.overflow(overflow),.compare_out(compare_out),.seg0(seg0));    

always @(posedge clk) begin
    $display("%d",result);
end


endmodule