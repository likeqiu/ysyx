module top(
    input a,
    input b,
    output f
);
  assign f = a ^b;

  initial begin
    $dumpfile("top.fst");
    $dumpvars(0,testbench);
  end
    endmodule
