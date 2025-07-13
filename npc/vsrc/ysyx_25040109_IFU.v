/* verilator lint_off UNUSEDSIGNAL */
module ysyx_25040109_IFU (

    input clk,
    input [31:0] next_pc,
    input rst,
    
    output  [31:0] pc,
   output  [31:0] inst_ifu,
   output   inst_valid  
);
    reg [31:0] pc_reg;
    reg [31:0] inst_reg;
        
    reg  inst_valid_reg;





    always @(posedge clk  or posedge rst) begin
        if (rst) begin
            pc_reg <= 32'h80000000;
        end else begin
            pc_reg <= next_pc; 
        end
    end

     
    reg [31:0] inst_from_mem;
    wire is_pc_valid = (pc_reg >= 32'h80000000) && (pc_reg <= 32'h87FFFFFF) && (pc_reg[1:0] == 2'b00);


    import "DPI-C" function void verilog_pmem_read(input int addr, output int data);
      



    always @(*) begin
         
        if (!rst && is_pc_valid) begin
            verilog_pmem_read(pc_reg, inst_from_mem);
            
        end else begin
            inst_from_mem = 32'h00000013;
        end


    end

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            inst_reg <= 32'h00000013; // Reset to NOP
            inst_valid_reg <= 1'b0;
        end else begin
            inst_reg <= inst_from_mem;
            inst_valid_reg <= is_pc_valid;
        end
    end

    // 输出
    assign pc = pc_reg;                 // 输出当前的 PC
    assign inst_ifu = inst_reg;         // 输出上一个周期取回的指令
    assign inst_valid = inst_valid_reg; // 输出指令的有效性



    /* inst_raw 是 临时变量，类型是 wire，可以通过 DPI-C 调用赋值。
    inst_ifu 是模块的 特定输出端口，默认是 wire，不能在 always 块中直接赋值，除非声明为 reg。DPI-C 不知道怎么处理它的“方向性”，所以不允许直接赋值。*/
endmodule
/* verilator lint_on UNUSEDSIGNAL */
