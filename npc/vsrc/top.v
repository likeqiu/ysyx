module top(
    input SW0,SW1,SW2,SW3,SW4,SW5,SW6,SW7,SW8,SW9,
    output LD1,LD0,
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



assign    LD1=F[1];
assign    LD0=F[0];

endmodule

