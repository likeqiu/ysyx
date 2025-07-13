/* verilator lint_off UNUSEDSIGNAL */
module ysyx_25040109_IFU (

    input clk,
    input [31:0] next_pc,
    input rst,
    
    output  [31:0] pc,
   output reg [31:0] inst_ifu,
   output  inst_valid  
);
    reg [31:0] pc_reg;
     wire [31:0] temp_inst_ifu;
     assign pc = pc_reg;
     assign inst_valid = (next_pc >= 32'h80000000) && (next_pc <= 32'h87FFFFFF) && (next_pc[1:0] == 2'b00);

    

    always @(posedge clk  or posedge rst) begin
        if (rst) begin
            pc_reg <= 32'h80000000;
        end else begin
            pc_reg <= next_pc; // 更新 PC
        end
    end


    import "DPI-C" function void verilog_pmem_read(input int addr, output int data);
      



    wire [31:0]select_d;
    task automatic verilog_pmem_read_test(int select);
    
    if (!rst && inst_valid) begin
        select = 1;
    verilog_pmem_read(pc_reg, temp_inst_ifu);
    end else begin
        select = 0;
    end

    endtask


    always @(posedge clk) begin
     
        verilog_pmem_read_test(select_d);
        inst_ifu <= (select_d == 32'd1) ? temp_inst_ifu : 32'h0000000;

    end



    /* inst_raw 是 临时变量，类型是 wire，可以通过 DPI-C 调用赋值。
    inst_ifu 是模块的 特定输出端口，默认是 wire，不能在 always 块中直接赋值，除非声明为 reg。DPI-C 不知道怎么处理它的“方向性”，所以不允许直接赋值。*/
endmodule
/* verilator lint_on UNUSEDSIGNAL */
