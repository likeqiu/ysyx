module top(
    input clk,
    input rst,
    output reg [15:0] led
);
  light u_light(
    .clk(clk),
    .rst(rst),
    .led(led)
  );

  initial begin
    $dumpfile("top.fst");
    $dumpvars(0,testbench);
  end
    endmodule
