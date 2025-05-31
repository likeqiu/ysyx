module ysyx_25040109_RegisterFile #(ADDR_WIDTH = 5,DATA_WIDTH=32)
(
    input [31:0] pc,
    input clk,
    input [DATA_WIDTH-1:0] wdata,
    input [ADDR_WIDTH-1:0] waddr,
    input wen,
    input [ADDR_WIDTH-1:0] raddr1,
    input [ADDR_WIDTH-1:0] raddr2,
    output [DATA_WIDTH-1:0] rdata1,
    output [DATA_WIDTH-1:0] rdata2,
    output [DATA_WIDTH-1:0] a0_out
    
);


    reg [DATA_WIDTH-1:0] rf[31:0];
    
    initial begin
    integer i;
    for (i = 0; i < 32; i = i + 1) begin
        rf[i] = 0; 
    end
end


 import "DPI-C" context function void update_cpu_state(input int  pc,input int  regs);
 
    task automatic send_state_to_dpi;
    update_cpu_state(pc, rf);
    endtask






    always @(posedge clk)begin
        if(wen) rf[waddr] <= wdata;
       // $display("waddr=0x%h  wdata=0x%h  raddr1=0x%h  rdata1=0x%h\n",waddr,wdata,raddr1,rdata1);
    end
    assign rdata1 = (raddr1==0) ? 0 : rf[raddr1]; 
    assign rdata2 = (raddr2==0) ? 0 : rf[raddr2];
    
    assign a0_out=rf[10];


endmodule

