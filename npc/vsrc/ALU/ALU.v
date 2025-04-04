module ALU(
    input clk,
    input [2:0] select,
    input [3:0] a,b,
    output reg [3:0] result,
    output reg zero,
    output reg cin,
    output reg overflow,
    output reg compare_out,
    output reg [6:0] seg0
);


    always @(posedge clk) begin
        result=4'b0;
        zero=1'b0;
        cin=1'b0;
        overflow=1'b0;
        compare_out=1'b0;

        casez(select)
        3'b000:begin 
           {cin,result}=$signed(a)+$signed(b);
            overflow=(a[3]==b[3]) && (a[3]!=result[3]);
            zero=(result==4'b0) ? 1'b1 : 1'b0;
        end
        3'b001:begin
            result=$signed(a)-$signed(b);
            overflow=(a[3]==b[3]) && (a[3]!=result[3]);
            zero=(result==4'b0) ? 1'b1 : 1'b0;
        end
        3'b010: result=~a;
        3'b011:result=a & b;
        3'b100:result=a | b;
        3'b101:result= a ^ b;
        3'b110:begin 
            if(a>b)
            compare_out=1'b1;
            else if(a<b)
            compare_out=1'b0;
        end
        3'b111:compare_out=($signed(a)==$signed(b)) ? 1'b1 :1'b0;


        endcase

       
        
    end

    

    always @(*) begin
        
        
        case ($signed(result))
                4'd0: seg0=7'b0000001;
                4'd1: seg0 = 7'b1111001;
                4'd2: seg0 = 7'b0010010;
                4'd3: seg0 = 7'b0000110;
                4'd4: seg0 = 7'b1001100;
                4'd5: seg0 = 7'b0100100;
                4'd6: seg0 = 7'b1100000;
                4'd7: seg0 = 7'b0001111;
                default: seg0 = 7'b1111111; 
        endcase
        
    end


endmodule
