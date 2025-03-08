module top(
    input SW0,SW1,SW2,SW3,SW4,SW5,SW6,SW7,SW8,SW9,
    output LD1,LD0,
    output reg [1:0] Y,
    output reg [1:0] X0,
    output reg [1:0] X1,
    output reg [1:0] X2,
    output reg [1:0] X3,
    output reg [1:0] F
);
always @(*) begin

    Y={SW1,SW0};
    X0={SW3,SW2};
    X1={SW5,SW4};
    X2={SW7,SW6};
    X3={SW9,SW8};
end

MuxKey #(4,2,2) i0 (F,Y,{
    2'b00,X0,
    2'b01,X1,
    2'b10,X2,
    2'b11,X3
});



assign    LD1=F[1];
assign    LD0=F[0];

endmodule

