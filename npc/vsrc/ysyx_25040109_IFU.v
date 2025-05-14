module ysyx_25040109_IFU (
    input clk,
    input [31:0] pc,
    input [31:0] inst,
    output [31:0] inst_ifu
);
    /* verilator lint_off UNUSEDSIGNAL */
    // clk 和 pc 当前未使用
    assign inst_ifu = inst;
    /* verilator lint_on UNUSEDSIGNAL */
endmodule

