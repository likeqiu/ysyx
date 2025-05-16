module ysyx_25040109_Reg #(WIDTH = 1, RESET_VAL = 0, RESET_INST=0) (
  input clk,
  input rst,
  input [WIDTH-1:0] din,
  output reg [WIDTH-1:0] dout,
  input wen,
  output [31:0] inst_ifu
);
  always @(posedge clk) begin
    if (rst) begin 
    dout <= RESET_VAL;
    inst_ifu<=RESET_INST;
    end
    else if (wen) dout <= din;
  end
endmodule



