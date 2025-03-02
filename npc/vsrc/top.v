module top(
    input a,
    input b,
    output f
);
  assign f = a ^b;

  initial begin
    $dumpfile("top.fst");
    $dumpfile(0,testbench);
    
    endmodule
