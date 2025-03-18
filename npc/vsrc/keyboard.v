module  top(
    input clk,clrk,nextdate_n,ps2_clk,ps2_date,
    output reg [7:0] date,
    output reg ready,
    output reg overflow,
    output reg [6:0] seg0,seg1,seg2,seg3,seg4,seg5
);

reg [9:0] buffer;
reg [7:0] fifo [7:0];
reg [3:0] w_ptr,r_ptr;
reg [3:0] count;
reg [2:0] ps2_clk_sync;
reg [9:0] last_buffer;
reg [7:0] button_times;
reg release_detected;


initial begin
    $monitor("ascll=%d,three=%d,four=%d",ascll,three,four);
    button_times=8'b0;
    release_detected=1'b1;
end 


always @(posedge clk)begin
    ps2_clk_sync<={ps2_clk_sync[1:0],ps2_clk};

end

wire sampling=ps2_clk_sync[2] & ~ps2_clk_sync[1];

always @(posedge clk)begin
    if(clrk)begin
        count<=4'd0;w_ptr<=4'd0;r_ptr<=4'd0;
        ready<=1'b0;overflow<=1'b0;release_detected<=1'b0;
    end else begin
        if(ready)begin
            if(nextdate_n==1'b0)begin
                r_ptr<=r_ptr+1'b1;
               $display("date %x", date[7:0]);
                if(w_ptr==r_ptr+1'b1)begin
                    ready<=1'b0;
                end
            end
        end


        if(sampling)begin
            if(count==4'd10)begin
                if(buffer[0]==0 && ps2_date && (^buffer[9:1]) )begin
                 if (buffer[8:1] != 8'hF0 && last_buffer[8:1]!= 8'hF0) begin
                    fifo[w_ptr[2:0]] <= buffer[8:1]; 
                    last_buffer<=buffer;
                    w_ptr<=w_ptr+1'b1;
                    ready<=1'b1;
                    overflow<=overflow | (r_ptr==w_ptr+1'b1);
                    release_detected <= 1'b0; 
                     button_times <=(last_buffer!=buffer) ? button_times + 1'b1 :button_times;
                 end   
                
                    $display("buffer %x", buffer[8:1]);

                    if (buffer[8:1] == 8'hF0) begin
                        release_detected <= 1'b1;
                    end 
                    last_buffer <= buffer; 
                
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

sevens_light_low first(.num(one),.ready(release_detected),.seg(seg0));
sevens_light_low second(.num(two),.ready(release_detected),.seg(seg1));

wire [7:0] ascll;
wire [3:0] three,four;

assign ascll=(date<8'd28) ? date+8'd29 : date+8'd37;
assign three=ascll[3:0];
assign four=ascll[7:4];


sevens_high_second third(.num(three),.ready(release_detected),.seg(seg2));
sevens_high_second fourth(.num(four),.ready(release_detected),.seg(seg3));


wire [7:0] five,six;
assign five=button_times % 10;
assign six=button_times / 10;

sevens_light_high fifth(.num(five),.seg(seg4));
sevens_light_high sixth(.num(six),.seg(seg5));






endmodule 






module sevens_light_low(
    input [3:0] num,
    input  ready,
    output reg [6:0] seg
);

    always @(*) begin
        if(ready==1'd0)begin
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
            4'd13: seg = 7'b1000010;  
            4'd14: seg = 7'b0110000;  
            4'd15: seg = 7'b0111000; 
            default: seg = 7'b0000000; 
        endcase
        end else begin
            seg = 7'b1111111; 
        end
    end

endmodule


module sevens_light_high(
    input [7:0] num,
    output reg [6:0] seg
);

    always @(*) begin
      
        case(num)
        8'd0: seg = 7'b0000001; 
        8'd1:seg=7'b1001111;
        8'd2:seg=7'b0010010;
        8'd3:seg=7'b0000110;
        8'd4:seg=7'b1001100;
        8'd5:seg=7'b0100100;
        8'd6:seg=7'b1100000;
        8'd7:seg=7'b0001111; 
        8'd8: seg = 7'b0000000; 
        8'd9: seg = 7'b0001100; 
        default: seg=7'b1111111;
        endcase
   
    end

endmodule


module sevens_high_second(
    input [3:0] num,
    input ready,
    output reg [6:0] seg
);

    always @(*) begin
         if(ready ==1'b0)begin
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
         end else begin
            seg=7'b1111111;

         end
     end

endmodule

