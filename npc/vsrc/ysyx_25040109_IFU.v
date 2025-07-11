module ysyx_25040109_IFU (
/* verilator lint_off UNUSEDSIGNAL */
    input clk,
    input [31:0] pc,
    input rst,
    /* verilator lint_on UNUSEDSIGNAL */
   output reg [31:0] inst_ifu  
);
    import "DPI-C" function void verilog_pmem_read(input int addr, output int data);

    wire pc_valid = !rst && (pc >= 32'h80000000) && (pc <= 32'h87FFFFFF);

    reg [31:0] temp_inst_ifu;

always @(posedge clk) begin
    if (pc_valid) begin
        inst_ifu<=temp_inst_ifu;
        verilog_pmem_read(pc, temp_inst_ifu);
        //$display("%d\n",inst_ifu);
    end 

    
end



    /* inst_raw 是 临时变量，类型是 wire，可以通过 DPI-C 调用赋值。
    inst_ifu 是模块的 特定输出端口，默认是 wire，不能在 always 块中直接赋值，除非声明为 reg。DPI-C 不知道怎么处理它的“方向性”，所以不允许直接赋值。*/
endmodule

