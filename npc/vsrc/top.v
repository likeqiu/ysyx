module top(

    output  [1:0] Y,
    output  [1:0] X0,
    output  [1:0] X1,
    output  [1:0] X2,
    output  [1:0] X3,
    output  [1:0] F
);




MuxKey #(4,2,2) i0 (
    .out(F),
    .key(Y),
    .lut({
        2'b00, X0,
        2'b01, X1,
        2'b10, X2,
        2'b11, X3
    })
);

endmodule

