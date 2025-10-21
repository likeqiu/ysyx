module ysyx_25040109_IFU (
    input [31:0] pc,
    input [31:0] imem_rdata,      // 从MEM获取的指令数据
    output [31:0] inst_ifu        // 当前PC对应的指令
);
    wire is_pc_valid = (pc >= 32'h80000000) && (pc <= 32'h87FFFFFF);
    
    // 地址有效性检查，无效地址返回NOP
    assign inst_ifu = is_pc_valid ? imem_rdata : 32'h00000013;

endmodule


