module top (
  input clk,
  input rst,
  output reg [15:0] led
 );
  parameter count=0;
  always @(posedge clk) begin
  if (rst) begin led <= 16'b1; count <= 0;end
  if(count>5)
  	begin led <= {led[14:0], led[15]}; count <= 0;end
  else
  	begin count <= count+1;end
  end
  else
  	begin led<=16'b0;end
    end
 endmodule