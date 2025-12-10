module ysyx_25040109_hanshake (
    input           clk,
    input           rst,

    // 来自 Memory (上游)
    input  [31:0]   imem_rdata,
    input           mem_valid,
    output          ifu_ready_to_mem, // 告诉 Mem 我是否 ready

    // 去往 IDU (下游)
    input           idu_ready,
    output [31:0]   inst_ifu,         // 输出给下游的指令
    output          ifu_valid_to_idu  // valid 传给下游
);

    // 内部寄存器
    reg          full;      // 状态: 0=IDLE(空), 1=WAIT(满)
    reg [31:0]   inst_temp; // 内部缓冲

    // 握手"事务" (fire) 信号
    wire mem_fire = mem_valid && ifu_ready_to_mem;
    wire idu_fire = ifu_valid_to_idu && idu_ready;

    // 我 (IFU) 何时 ready? -> 当我为空, 或者我即将变空时
    assign ifu_ready_to_mem = !full || idu_ready;

    // 我 (IFU) 何时 valid? -> 当我满了, 或者我是空的但上游来了数据 (直通)
    assign ifu_valid_to_idu = full || (mem_valid && ifu_ready_to_mem);
    
    // 我 (IFU) 输出什么数据? -> 如果满了, 输出缓冲; 否则, 输出上游数据 (直通)
    assign inst_ifu = full ? inst_temp : imem_rdata;

    always @(posedge clk) begin
        if (rst) begin
            full <= 1'b0; // 初始为空
            inst_temp <= 32'b0;
        end else begin
            // 状态机 (full 寄存器)
            if (mem_fire && !idu_fire) begin
                full <= 1'b1; // 只有流入: 变满
            end else if (!mem_fire && idu_fire) begin
                full <= 1'b0; // 只有流出: 变空
            end
            // else (都 fire 或都 no-fire), 状态不变

            // 数据寄存
            if (mem_fire) begin
                inst_temp <= imem_rdata;
            end
        end
    end

endmodule
