module ysyx_25040109_IFU (
    input           clk,
    input           rst,

    // 来自 Memory (上游)
    input  [31:0]   imem_rdata,
    input           mem_valid,
    output          ifu_ready_to_mem, // 告诉 Mem 我是否 ready

    // 去往 IDU (下游)
    input           idu_ready,
    output [31:0]   inst_ifu,         // 输出给下游的指令
    output          ifu_valid_to_idu  // valid 传给下游
);

    // 统一握手逻辑放入独立模块，便于复用和一致性维护
    ysyx_25040109_hanshake u_ifu_hanshake (
        .clk(clk),
        .rst(rst),
        .imem_rdata(imem_rdata),
        .mem_valid(mem_valid),
        .ifu_ready_to_mem(ifu_ready_to_mem),
        .idu_ready(idu_ready),
        .inst_ifu(inst_ifu),
        .ifu_valid_to_idu(ifu_valid_to_idu)
    );

endmodule
