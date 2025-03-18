module  top(
    input clk,clrk,nextdate_n,ps2_clk,ps2_date,
    output reg [7:0] date,
    output reg ready,
    output reg overflow,
    output [6:0] seg0,seg1,seg2,seg3,seg4,seg5
);

reg [9:0] buffer;
reg [7:0] fifo [7:0];
reg [3:0] w_ptr,r_ptr;
reg [3:0] count;
reg [2:0] ps2_clk_sync;
reg [9:0] last_buffer;
reg [5:0] button_times;

initial begin
    button_times=6'b0;
end 


always @(posedge clk)begin
    ps2_clk_sync<={ps2_clk_sync[1:0],ps2_clk};

end

wire sampling=ps2_clk_sync[2] & ~ps2_clk_sync[1];

always @(posedge clk)begin
    if(clrk)begin
        count<=4'd0;w_ptr<=4'd0;r_ptr<=4'd0;
        ready<=1'b0;overflow<=1'b0;
    end else begin
        if(ready)begin
            if(nextdate_n==1'b0)begin
                r_ptr<=r_ptr+3'b1;
               $display("date %x", date[7:0]);
                if(w_ptr==r_ptr+1'b1)begin
                    ready<=1'b0;
                end
            end
        end


        if(sampling)begin
            if(count==4'd10)begin
                if(buffer[0]==0 && ps2_date && (^buffer[9:1]) )begin
                    fifo[w_ptr[2:0]] <= buffer[8:1]; 
                    last_buffer<=buffer;
                    w_ptr<=w_ptr+1'b1;
                    ready<=1'b1;
                    overflow<=overflow | (r_ptr==w_ptr+1'b1);

                    button_times<=button_times+1'b1;

                    $display("receive %d", button_times);
                      $display("receive %x", buffer[8:1]);
                end
                count<=4'b0;

            end  else begin
                w_ptr<=w_ptr;
                r_ptr<=r_ptr;
                buffer[count]<=ps2_date;
                count<=count+1'b1;
            end

        end
        end

    end
        assign date=fifo[r_ptr[2:0]];

wire [3:0] one,two;
assign one=date[3:0];
assign two=date[7:4];

sevens_light_low first(.num(one),.seg(seg0));
sevens_light_low second(.num(two),.seg(seg1));

wire [7:0] ascll;
assign ascll=date+8'd47;

wire [3:0] three,four;
assign three=ascll[3:0] % 10;
assign four=ascll[7:4] / 10;

sevens_light_high third(.num(three),.seg(seg2));
sevens_light_high fourth(.num(four),.seg(seg3));




endmodule 






module sevens_light_low(
    input [3:0] num,
    output reg [6:0] seg
);

    always @(*) begin
        case(num)
        4'd0: seg = 7'b0000001; 
        4'd1:seg=7'b1001111;
        4'd2:seg=7'b0010010;
        4'd3:seg=7'b0000110;
        4'd4:seg=7'b1001100;
        4'd5:seg=7'b0100100;
        4'd6:seg=7'b1100000;
        4'd7:seg=7'b0001111; 
            4'd8: seg = 7'b0000000; 
            4'd9: seg = 7'b0001100; 
            4'd10: seg = 7'b0000001;  //A显示不出来,用
            4'd11: seg = 7'b0000000; //B显示为8
            4'd12: seg = 7'b0110001;  
            4'd13: seg = 7'b0011100;  
            4'd14: seg = 7'b0110000;  
            4'd15: seg = 7'b0111000; 
            default: seg = 7'b0000000; 
        endcase
    end

endmodule


module sevens_light_high(
    input [3:0] num,
    output reg [6:0] seg
);

    always @(*) begin
        case(num)
        4'd0: seg = 7'b0000001; 
        4'd1:seg=7'b1001111;
        4'd2:seg=7'b0010010;
        4'd3:seg=7'b0000110;
        4'd4:seg=7'b1001100;
        4'd5:seg=7'b0100100;
        4'd6:seg=7'b1100000;
        4'd7:seg=7'b0001111; 
        4'd8: seg = 7'b0000000; 
        4'd9: seg = 7'b0001100; 
        default: seg=7'b1111111;
        endcase
    end

endmodule

