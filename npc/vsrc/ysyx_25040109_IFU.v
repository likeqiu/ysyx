module ysyx_25040109_IFU (
/* verilator lint_off UNUSEDSIGNAL */
    input clk,
    input [31:0] pc,
    /* verilator lint_on UNUSEDSIGNAL */
    input [31:0] inst,
    output [31:0] inst_ifu
);

    assign inst_ifu = inst;
endmodule

