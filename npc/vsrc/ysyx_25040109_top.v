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

    // CPU与MEM的连接信号
    wire [31:0] imem_addr, imem_rdata;
    wire imem_ren;
    
    wire [31:0] dmem_raddr, dmem_rdata;
    wire dmem_ren;
    wire [31:0] dmem_waddr, dmem_wdata;
    wire [2:0] dmem_wlen;
    wire dmem_wen;

    // CPU模块实例化
    ysyx_25040109_CPU cpu (
        .clk(clk),
        .rst(rst),
        .p_count_number(p_count_number),
        
        // 取指接口
        .imem_addr(imem_addr),
        .imem_ren(imem_ren),
        .imem_rdata(imem_rdata),
        
        // 访存接口
        .dmem_raddr(dmem_raddr),
        .dmem_ren(dmem_ren),
        .dmem_rdata(dmem_rdata),
        .dmem_waddr(dmem_waddr),
        .dmem_wdata(dmem_wdata),
        .dmem_wlen(dmem_wlen),
        .dmem_wen(dmem_wen),
        
        // 调试接口
        .inst(inst),
        .pc(pc),
        .a0_out(a0_out)
    );

    // MEM模块实例化
    ysyx_25040109_MEM mem (
        .clk(clk),
        .rst(rst),
        
        // 取指通道
        .imem_addr(imem_addr),
        .imem_ren(imem_ren),
        .imem_rdata(imem_rdata),
        
        // 访存通道
        .dmem_raddr(dmem_raddr),
        .dmem_ren(dmem_ren),
        .dmem_rdata(dmem_rdata),
        .dmem_waddr(dmem_waddr),
        .dmem_wdata(dmem_wdata),
        .dmem_wlen(dmem_wlen),
        .dmem_wen(dmem_wen)
`ifdef SYNTHESIS
        ,
        .yosys_imem_rdata(yosys_imem_rdata),
        .yosys_dmem_rdata(yosys_dmem_rdata)
`endif
    );

endmodule


