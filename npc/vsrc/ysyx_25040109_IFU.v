/* verilator lint_off UNUSEDSIGNAL */
module ysyx_25040109_IFU (
    input           clk,
    input [31:0]    next_pc,
    input           rst,
    
    output [31:0]   pc,
    output reg [31:0] inst_ifu,  // 最终的指令输出，保持 reg 类型
    output          inst_valid
);

    reg [31:0] pc_reg;
    assign pc = pc_reg;

    // inst_valid 的逻辑可以简化为组合逻辑，使其立即反应 next_pc 的状态
    assign inst_valid = (next_pc >= 32'h80000000) && (next_pc <= 32'h87FFFFFF) && (next_pc[1:0] == 2'b00);

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            pc_reg <= 32'h80000000;
        end else begin
            pc_reg <= next_pc; // 在时钟沿更新 PC
        end
    end

    // --- 修改核心部分 ---

    // 1. 声明一个 wire 类型的临时变量来接收 DPI-C 函数的输出
    wire [31:0] inst_from_pmem; 

    // 2. 使用 DPI-C 函数，它的输出现在连接到一个 wire 上
    //    这个函数调用现在是组合逻辑的一部分
    import "DPI-C" function void verilog_pmem_read(input int addr, output int data);
    
    // 3. 将函数调用放在 always 块外面，或者使用 assign 来驱动这个 wire
    //    这里的逻辑是：如果 inst_valid 为真，就根据当前的 pc_reg 去读内存
    //    注意：这里我们使用 pc_reg 而不是 next_pc，因为取指令发生在 PC 更新之后
    assign inst_from_pmem = (inst_valid && !rst) ? verilog_pmem_read_wrapper(pc_reg) : 32'b0;

    // 为了在 assign 中使用 DPI-C，我们可以创建一个简单的包装函数
    // 如果 Verilator 支持直接在 assign 中调用 DPI-C，也可以直接调用
    // 但更清晰和兼容性更好的做法是使用 always_comb
    
    // 推荐使用 always_comb 块处理组合逻辑，更清晰
    wire [31:0] pmem_data;
    always_comb begin
        if (inst_valid && !rst) begin
            verilog_pmem_read(pc_reg, pmem_data);
        end else begin
            pmem_data = 32'b0;
        end
    end

    // 4. 在时序逻辑中，用非阻塞赋值来锁存指令
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            inst_ifu <= 32'b0;
        end else begin
            // 在每个时钟上升沿，将从内存读取到的数据锁存到 inst_ifu 寄存器中
            inst_ifu <= pmem_data;
        end
    end

endmodule
/* verilator lint_on UNUSEDSIGNAL */

