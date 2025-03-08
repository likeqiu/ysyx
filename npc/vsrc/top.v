module top(out,key,lut);
    output reg [1:0] out;
    input reg [1:0] key;
    input  reg [3:0] lut;
    


MuxKey #(4,2,1) i0 (out,key,{
    2'b00,lut[0],
    2'b01,lut[1],
    2'b10,lut[2],
    2'b11,lut[3]
});

endmodule

