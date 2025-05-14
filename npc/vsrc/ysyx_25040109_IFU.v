module ysyx_25040109_IFU(
    input clk,
    input [31:0] pc,
    input [31:0] inst,
    output [31:0] inst_ifu
);

/* verilator lint_off UNUSEDSIGNAL */
    input clk,
    input [31:0] pc,
    /* verilator lint_on UNUSEDSIGNAL */
    assign inst_ifu=inst;

endmodule

