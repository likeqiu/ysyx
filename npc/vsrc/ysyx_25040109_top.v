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
    output [31:0] a0_out,

    // 差分测试接口
    output inst_wb_complete,
    output is_load_out,
    output is_store_out,
    output is_ecall_out,
    output [6:0] opcode_out,
    output [31:0] dmem_raddr_out,
    output [31:0] dmem_waddr_out
);

    // ========================================
    // 信号声明区
    // ========================================
    // 取指通道信号（CPU ↔ MEM）
    wire [31:0] imem_addr;              // 取指地址 | CPU → MEM
    wire imem_ren;                      // 取指使能 | CPU → MEM
    wire [31:0] imem_rdata;             // 指令数据 | MEM → CPU
    wire imem_rvalid;                   // 指令数据有效 | MEM → CPU（握手协议）

    // 访存通道信号（CPU ↔ MEM）
    wire [31:0] dmem_raddr;             // 数据读地址 | CPU → MEM
    wire dmem_ren;                      // 数据读使能 | CPU → MEM
    wire [31:0] dmem_rdata;             // 数据读结果 | MEM → CPU
    wire dmem_rvalid;                   // 数据读有效 | MEM → CPU（握手协议）
    wire [31:0] dmem_waddr;             // 数据写地址 | CPU → MEM
    wire [31:0] dmem_wdata;             // 数据写数据 | CPU → MEM
    wire [2:0] dmem_wlen;               // 写长度（字节/半字/字） | CPU → MEM
    wire dmem_wen;                      // 数据写使能 | CPU → MEM
    wire dmem_wready;                   // 数据写准备好 | MEM → CPU（握手协议）

    // 导出访存地址用于差分测试
    assign dmem_raddr_out = dmem_raddr;
    assign dmem_waddr_out = dmem_waddr;

    // ========================================
    // 模块实例化区
    // ========================================
    // CPU模块（处理器内核）
    ysyx_25040109_CPU cpu (
        .clk(clk),
        .rst(rst),
        .p_count_number(p_count_number),

        // 取指接口
        .imem_addr(imem_addr),
        .imem_ren(imem_ren),
        .imem_rdata(imem_rdata),
        .imem_rvalid(imem_rvalid),

        // 访存接口
        .dmem_raddr(dmem_raddr),
        .dmem_ren(dmem_ren),
        .dmem_rdata(dmem_rdata),
        .dmem_rvalid(dmem_rvalid),
        .dmem_waddr(dmem_waddr),
        .dmem_wdata(dmem_wdata),
        .dmem_wlen(dmem_wlen),
        .dmem_wen(dmem_wen),
        .dmem_wready(dmem_wready),

        // 调试接口
        .inst(inst),
        .pc(pc),
        .a0_out(a0_out),

        // 差分测试接口
        .inst_wb_complete(inst_wb_complete),
        .is_load_out(is_load_out),
        .is_store_out(is_store_out),
        .is_ecall_out(is_ecall_out),
        .opcode_out(opcode_out)
    );

    // MEM模块（双通道内存）
    ysyx_25040109_MEM mem (
        .clk(clk),
        .rst(rst),

        // 取指通道
        .imem_addr(imem_addr),
        .imem_ren(imem_ren),
        .imem_rdata(imem_rdata),
        .imem_rvalid(imem_rvalid),

        // 访存通道
        .dmem_raddr(dmem_raddr),
        .dmem_ren(dmem_ren),
        .dmem_rdata(dmem_rdata),
        .dmem_rvalid(dmem_rvalid),
        .dmem_waddr(dmem_waddr),
        .dmem_wdata(dmem_wdata),
        .dmem_wlen(dmem_wlen),
        .dmem_wen(dmem_wen),
        .dmem_wready(dmem_wready)
`ifdef SYNTHESIS
        ,
        .yosys_imem_rdata(yosys_imem_rdata),
        .yosys_dmem_rdata(yosys_dmem_rdata)
`endif
    );

endmodule


