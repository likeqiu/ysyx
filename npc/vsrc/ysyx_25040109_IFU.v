/* verilator lint_off UNUSEDSIGNAL */
module ysyx_25040109_IFU_fixed (

    input clk,
    input [31:0] next_pc, // 这是下一周期要跳转到的 PC
    input rst,
    
    output reg [31:0] pc, // 当前周期的 PC
    output reg [31:0] inst_ifu, // 当前周期的指令
    output inst_valid // 当前输出的指令是否有效
);

    // DPI-C 函数导入
    import "DPI-C" function void verilog_pmem_read(input int addr, output int data);

    // inst_valid 应该反映当前输出的 pc 和 inst_ifu 是否有效
    // 这里我们假设只要PC在合法范围内，指令就是有效的。
    // 流水线冲刷等逻辑会让外部将 next_pc 设置为一个无效地址。
    assign inst_valid = (pc >= 32'h80000000) && (pc <= 32'h87FFFFFF);

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            // 复位时，PC指向起始地址，指令为无效/NOP
            pc <= 32'h80000000;
            inst_ifu <= 32'h0; // 通常是 NOP 指令, e.g., 32'h00000013
        end else begin
            // 在每个时钟上升沿，用 next_pc 更新当前 PC
            pc <= next_pc;
            
            // 同时，根据 next_pc (即下一周期的PC) 从内存中取指令
            // 这样，在下一个周期，pc 和 inst_ifu 就是匹配的
            if ((next_pc >= 32'h80000000) && (next_pc <= 32'h87FFFFFF) && (next_pc[1:0] == 2'b00)) begin
                verilog_pmem_read(next_pc, inst_ifu);
            end  else begin
                inst_ifu <= 32'h0; // 如果地址无效，输出 NOP
            end
        
    end
end

endmodule
