module ysyx_25040109_RegisterFile #(ADDR_WIDTH = 1,DATA_WIDTH=1)
(
    input clk,
    input [DATA_WIDTH-1:0] wdata,
    input [ADDR_WIDTH-1:0] waddr,
    input wen,
    input [ADDR_WIDTH-1:0] raddr1,
    output [DATA_WIDTH-1:0] rdata1
);


    reg [DATA_WIDTH-1:0] rf[2**ADDR_WIDTH-1:0];
    initial begin
        rf[0]=0;
    end



    always @(posedge clk)begin
        if(wen) rf[waddr] <= wdata;
        $display("waddr=0x%0x  wdata=0x%0x  raddr1=0x%x  rdata1=0x%0x\n",waddr,wdata,raddr1,rdata1);
    end
    assign rdata1 = (raddr1==0) ? 0 : rf[raddr1]; 

endmodule

