module ysyx_25040109_IFU (
/* verilator lint_off UNUSEDSIGNAL */
    input clk,
    input [31:0] pc,
    input rst,
    /* verilator lint_on UNUSEDSIGNAL */
    output reg [31:0] inst_ifu
    
);
    import "DPI-C" function void pmem_read(input int addr, output int data);
   reg [31:0] inst_read;

    always @(*) begin
        if (!rst && pc >= 32'h80000000 && pc <= 32'h87FFFFFF) begin
            pmem_read(pc, inst_read);  
        end else begin
            inst_read = 32'h0;
        end
    end

    always @(posedge clk) begin
        inst_ifu <= inst_read;  // 注册到寄存器，1拍延迟
    end
    /* inst_raw 是 临时变量，类型是 wire，可以通过 DPI-C 调用赋值。
    inst_ifu 是模块的 特定输出端口，默认是 wire，不能在 always 块中直接赋值，除非声明为 reg。DPI-C 不知道怎么处理它的“方向性”，所以不允许直接赋值。*/
endmodule

