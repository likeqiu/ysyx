module top(
    input SW0,SW1,SW2,SW3,SW4,SW5,SW6,SW7,SW8,SW9,
    output LD1,LD0
);

reg [1:0] Y={SW1,SW0};
reg [1:0] X0={SW3,SW2};
reg [1:0] X1={SW5,SW4};
reg [1:0] X2={SW7,SW6};
reg [1:0] X3={SW9,SW8};
reg [1:0] F;

mu241 mld(.Y(Y),.X0(X0),.X1(X1),.X2(X2),.X3(X3),.F(F));


assign    LD1=F[1];
assign    LD0=F[0];

endmodule

