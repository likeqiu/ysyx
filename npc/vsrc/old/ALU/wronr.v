module top (
	input clk,
	input [2:0] choose,
	input [3:0] a,
	input [3:0] b,
	output  reg cin,
	output  reg [3:0] out
);
	always @(posedge clk)
	begin
		case(choose)
			3'b000:begin 
			{cin,out}={1'b0,a}+{1'b0,b}; 
			end
			3'b001:begin 
			{cin,out}=$signed(a)+{b,1'b1}; 
			end
			3'b010:begin 
			{cin,out}=~a; 
			end
			3'b011:begin 
			{cin,out}=a&b; 
			end
			3'b100:begin 
			out=a|b;cin=1'b0; 
			end
			3'b101:begin 
			out=a^b;cin=1'b0; 
			end
			3'b110:begin 
				    	if (a[3] == b[3]) 
				    		begin
                    				if (a < b)  
                    				out = 4'b0001;	
                        			else  
                        			out = 4'b0000;
                				end
               				 else 
               				 	begin				
                    				if ((a[3] == 1'b0) && (b[3] == 1'b1)) 
                    				out= 4'b0000;
                    				if ((a[3] == 1'b1) && (b[3] == 1'b0)) 
                    				out= 4'b0001;
                				end
            			end
			3'b111:begin
					if(a==b)
					out=4'b0001;
					else
					out=4'b0000;
				end
		endcase
	end
endmodule