module ysyx_25040109_RegisterFile #(parameter ADDR_WIDTH = 5,parameter DATA_WIDTH=32)
(
    input [31:0] pc,
    input clk,
    input rst,
    input [DATA_WIDTH-1:0] wdata,
    input [ADDR_WIDTH-1:0] waddr,
    input wen,
    input [ADDR_WIDTH-1:0] raddr1,
    input [ADDR_WIDTH-1:0] raddr2,
    output  [DATA_WIDTH-1:0] rdata1,
    output  [DATA_WIDTH-1:0] rdata2,
    output [DATA_WIDTH-1:0] a0_out,
       
    
    input                       csr_we,
    input  [11:0]               csr_addr, 
    input  [DATA_WIDTH-1:0]     csr_wdata,
    output reg [DATA_WIDTH-1:0] mepc_out,    
    output reg [DATA_WIDTH-1:0] mtvec_out,   
    output  [DATA_WIDTH-1:0]     csr_rdata   
    
    
);


    reg [DATA_WIDTH-1:0] rf[31:0];
    reg [DATA_WIDTH-1:0] mstatus;
    reg [DATA_WIDTH-1:0] mepc;
    reg [DATA_WIDTH-1:0] mcause;
    reg [DATA_WIDTH-1:0] mtvec;

    localparam CSR_MSTATUS = 12'h300;
    localparam CSR_MTVEC   = 12'h305;
    localparam CSR_MEPC    = 12'h341;
    localparam CSR_MCAUSE  = 12'h342;
    
`ifndef  SYNTHESIS    
    initial begin
    integer i;
    for (i = 0; i < 32; i = i + 1) begin
        rf[i] = 0; 
    end


    mepc    = 32'h0;
    mcause  = 32'h0;
    $display("mtvec:%x",mtvec);
    mstatus = 32'h1800;        // 设置初始状态

end

`endif 


`ifndef  SYNTHESIS

 import "DPI-C"  function void update_cpu_state(input int unsigned pc,input int unsigned  regs[]);
 

    always @(*) begin
        `ifndef SYNTHESIS
        update_cpu_state(pc,rf);
        `endif

       

    end

`endif 



    always @(posedge clk)begin
        if(wen && waddr != 5'b0) rf[waddr] <= wdata;
        

       // $display("waddr=0x%h  wdata=0x%h  raddr1=0x%h  rdata1=0x%h\n",waddr,wdata,raddr1,rdata1);
    end
    assign rdata1 = (raddr1==5'b0) ? 32'b0 : rf[raddr1]; 
    assign rdata2 = (raddr2==5'b0) ? 32'b0 : rf[raddr2];
    
    assign a0_out=rf[10];

    assign csr_rdata = (csr_addr == CSR_MSTATUS) ? mstatus :
                       (csr_addr == CSR_MTVEC)   ? mtvec   :
                       (csr_addr == CSR_MEPC)    ? mepc    :
                       (csr_addr == CSR_MCAUSE)  ? mcause  :
                       32'h0;

    always @(*) begin
        mepc_out  = mepc;
        mtvec_out = mtvec;
    end    

// 在RegisterFile模块中，确保CSR寄存器正确初始化
`ifndef SYNTHESIS    
initial begin
    integer i;
    for (i = 0; i < 32; i = i + 1) begin
        rf[i] = 0;
    end
    
    // 这些初始化很关键！
    mstatus = 32'h1800;     // 设置合理的初始值
    mtvec   = 32'h80000000; // 异常处理入口地址
    mepc    = 32'h0;
    mcause  = 32'h0;
end
`endif


// 确保CSR写入逻辑正确
always @(posedge clk) begin
    if (csr_we) begin
        case (csr_addr)
            CSR_MSTATUS: begin
                mstatus <= csr_wdata;
                $display("写入MSTATUS: 0x%08x", csr_wdata); // 调试用
            end
            CSR_MTVEC: begin
                mtvec <= csr_wdata;
                $display("写入MTVEC: 0x%08x", csr_wdata);
            end
            CSR_MEPC: begin
                mepc <= csr_wdata;
                $display("写入MEPC: 0x%08x", csr_wdata);
            end
            CSR_MCAUSE: begin
                mcause <= csr_wdata;
                $display("写入MCAUSE: 0x%08x", csr_wdata);
                for(int i = 0;i<16;i++)begin
                    $display("before:gpr[%d]: 0x%x\n",i,rf[i]);
                end
                
            end
            default: ;
        endcase
    end
end

endmodule

