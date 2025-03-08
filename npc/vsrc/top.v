module top(
    output reg [1:0] out,
    input reg [1:0] key,
    input  reg [1:0] X0,X1,X2,X3
);


MuxKey #(4,2,2) i0 (out,key,{
    2'b00,X0[1:0],
    2'b01,X1[1:0],
    2'b10,X2[1:0],
    2'b11,X3[1:0]
});


endmodule

