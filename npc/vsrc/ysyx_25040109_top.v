module ysyx_25040109_top (
    input clk,
    input rst,
    input [31:0] p_count_number,
    
`ifdef SYNTHESIS
    input [31:0] yosys_imem_rdata,  // 综合模式：取指数据
    input [31:0] yosys_dmem_rdata,  // 综合模式：访存数据
`endif

    output [31:0] inst,
    output [31:0] pc,
    output [31:0] a0_out
);

    // ========================================
    // 信号声明区
    // ========================================
    // 取指通道信号（CPU ↔ MEM）- 握手协议
    wire [31:0] imem_addr;
    wire imem_valid;
    wire imem_ready;
    wire [31:0] imem_rdata;
    wire imem_rdata_valid;
    wire imem_rdata_ready;
    
    // 访存通道信号（CPU ↔ MEM）- 握手协议
    wire [31:0] dmem_raddr;
    wire dmem_rvalid;
    wire dmem_rready;
    wire [31:0] dmem_rdata;
    wire dmem_rdata_valid;
    wire dmem_rdata_ready;
    wire [31:0] dmem_waddr;
    wire [31:0] dmem_wdata;
    wire [2:0] dmem_wlen;
    wire dmem_wvalid;
    wire dmem_wready;

    // ========================================
    // 模块实例化区
    // ========================================
    // CPU模块（处理器内核）
    ysyx_25040109_CPU cpu (
        .clk(clk),
        .rst(rst),
        .p_count_number(p_count_number),
        
        // 取指接口 - 握手协议
        .imem_addr(imem_addr),
        .imem_valid(imem_valid),
        .imem_ready(imem_ready),
        .imem_rdata(imem_rdata),
        .imem_rdata_valid(imem_rdata_valid),
        .imem_rdata_ready(imem_rdata_ready),
        
        // 访存接口 - 握手协议
        .dmem_raddr(dmem_raddr),
        .dmem_rvalid(dmem_rvalid),
        .dmem_rready(dmem_rready),
        .dmem_rdata(dmem_rdata),
        .dmem_rdata_valid(dmem_rdata_valid),
        .dmem_rdata_ready(dmem_rdata_ready),
        .dmem_waddr(dmem_waddr),
        .dmem_wdata(dmem_wdata),
        .dmem_wlen(dmem_wlen),
        .dmem_wvalid(dmem_wvalid),
        .dmem_wready(dmem_wready),
        
        // 调试接口
        .inst(inst),
        .pc(pc),
        .a0_out(a0_out)
    );

    // MEM模块（双通道内存）
    ysyx_25040109_MEM mem (
        .clk(clk),
        .rst(rst),
        
        // 取指通道 - 握手协议
        .imem_addr(imem_addr),
        .imem_valid(imem_valid),
        .imem_ready(imem_ready),
        .imem_rdata(imem_rdata),
        .imem_rdata_valid(imem_rdata_valid),
        .imem_rdata_ready(imem_rdata_ready),
        
        // 访存通道 - 握手协议
        .dmem_raddr(dmem_raddr),
        .dmem_rvalid(dmem_rvalid),
        .dmem_rready(dmem_rready),
        .dmem_rdata(dmem_rdata),
        .dmem_rdata_valid(dmem_rdata_valid),
        .dmem_rdata_ready(dmem_rdata_ready),
        .dmem_waddr(dmem_waddr),
        .dmem_wdata(dmem_wdata),
        .dmem_wlen(dmem_wlen),
        .dmem_wvalid(dmem_wvalid),
        .dmem_wready(dmem_wready)
`ifdef SYNTHESIS
        ,
        .yosys_imem_rdata(yosys_imem_rdata),
        .yosys_dmem_rdata(yosys_dmem_rdata)
`endif
    );

endmodule


