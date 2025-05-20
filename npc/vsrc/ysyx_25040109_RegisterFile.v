module ysyx_25040109_RegisterFile #(ADDR_WIDTH = 1,DATA_WIDTH=1)
(
    input clk,
    input [DATA_WIDTH-1:0] wdata,
    input [ADDR_WIDTH-1:0] waddr,
    input wen,
    input [ADDR_WIDTH-1:0] raddr1,
    output [DATA_WIDTH-1:0] rdata1,
    output [DATA_WIDTH-1:0] a0_out
);


    reg [DATA_WIDTH-1:0] rf[31:0];
    
    initial begin
    integer i;
    for (i = 0; i < 32; i = i + 1) begin
        rf[i] = 0; 
    end
end

    export "DPI-C" task print_registers;

    task print_registers;
        integer i;
        begin
            $display("=== Register File Contents ===");
            for(int i=0;i<32;i=i+1) begin
                $display("x%0d: 0x%h (%0d)",i,rf[i],rf[i]);
            end
            $display("=============================");
        end
    endtask


    assign a0_out=rf[10]; 

    always @(posedge clk)begin
        if(wen) rf[waddr] <= wdata;
       // $display("waddr=0x%h  wdata=0x%h  raddr1=0x%h  rdata1=0x%h\n",waddr,wdata,raddr1,rdata1);
    end
    assign rdata1 = (raddr1==0) ? 0 : rf[raddr1]; 

endmodule

