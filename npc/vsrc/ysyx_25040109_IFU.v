// 指令获取单元 (IFU) - 从内存获取指令
module ysyx_25040109_IFU (
    input [31:0] pc,          
    input [31:0] inst_from_mem,   // 来自mem模块的指令
    output [31:0] inst_ifu        // 输出指令
);
    wire is_pc_valid = (pc >= 32'h80000000) && (pc <= 32'h87FFFFFF);
    
    // PC有效时输出指令，无效时输出NOP
    assign inst_ifu = is_pc_valid ? inst_from_mem : 32'h00000013;

endmodule


