module ysyx_25040109_IFU (
/* verilator lint_off UNUSEDSIGNAL */
    input clk,
    input [31:0] pc,
    input rst,
    /* verilator lint_on UNUSEDSIGNAL */
    output  [31:0] inst_ifu
    
);
    import "DPI-C" function void pmem_read(input int addr, output int data);
reg [31:0] inst_read;
reg [31:0] inst_raw;

always @(posedge clk) begin
    if (rst) begin
        pmem_read(pc, inst_read);  // 阻塞赋值
        inst_raw <= inst_read;     // 非阻塞赋值
    end else begin
        inst_raw <= 32'h0;
    end
end


    ysyx_25040109_Reg #(32, 32'h0) inst_reg (
        .clk(clk),
        .rst(rst),
        .din(inst_raw),
        .dout(inst_ifu),
        .wen(1'b1)
    );
    /* inst_raw 是 临时变量，类型是 wire，可以通过 DPI-C 调用赋值。
    inst_ifu 是模块的 特定输出端口，默认是 wire，不能在 always 块中直接赋值，除非声明为 reg。DPI-C 不知道怎么处理它的“方向性”，所以不允许直接赋值。*/
endmodule

