module ysyx_25040109_IFU (
    // 来自 Memory (上游)
    input  [31:0]   imem_rdata,
    input           mem_valid,
    output          ifu_ready_to_mem, // 告诉 Mem 我是否 ready

    // 去往 IDU (下游)
    input           idu_ready,
    output [31:0]   inst_ifu,         // 输出给下游的指令
    output          ifu_valid_to_idu  // valid 传给下游
);

    // 简化为串行握手：上游只有在下游ready时才拉取
    assign ifu_ready_to_mem = idu_ready;
    assign ifu_valid_to_idu = mem_valid;
    assign inst_ifu = imem_rdata;

endmodule
