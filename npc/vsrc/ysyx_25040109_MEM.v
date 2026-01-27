module ysyx_25040109_MEM (
    input clk,
    input rst,

    // 取指通道（imem - Instruction Memory）
    input [31:0] imem_addr,        // 取指地址
    input imem_ren,                // 取指使能
    output reg [31:0] imem_rdata,  // 指令数据
    output reg imem_rvalid,        // 指令数据有效信号（握手协议）
    input imem_ready,              // 指令接收方准备好（握手协议）

    // 访存通道（dmem - Data Memory）
    // 读通道
    input [31:0] dmem_raddr,       // 数据读地址
    input dmem_ren,                // 数据读使能
    output reg [31:0] dmem_rdata,  // 数据读结果
    output reg dmem_rvalid,        // 数据读有效信号（握手协议）
    input dmem_rready,             // 数据读接收方ready（握手协议）

    // 写通道
    input [31:0] dmem_waddr,       // 数据写地址
    input [31:0] dmem_wdata,       // 数据写数据
    input [2:0] dmem_wlen,         // 写长度（3'b001=字节, 3'b010=半字, 3'b100=字）
    input dmem_wen,                // 数据写使能（握手）
    input dmem_wvalid,             // 数据写有效（握手）
    output reg dmem_wready         // 数据写准备好信号（握手协议）

`ifdef SYNTHESIS
    ,
    input [31:0] yosys_imem_rdata, // 综合模式：取指数据
    input [31:0] yosys_dmem_rdata  // 综合模式：访存数据
`endif
);

`ifndef SYNTHESIS
    import "DPI-C" function int pmem_read(input int raddr);
    import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);

    reg [7:0] dmem_wmask;
    reg [31:0] dmem_wdata_aligned;

    // 根据写长度与地址低位生成字节写掩码和对齐后的写数据
    always @(*) begin
        dmem_wmask = 8'b0; 
        dmem_wdata_aligned = dmem_wdata;
        case (dmem_wlen)
            3'b001: begin  // SB
                dmem_wmask = 8'b00000001 << dmem_waddr[1:0];
                dmem_wdata_aligned = dmem_wdata << {dmem_waddr[1:0], 3'b000};
            end
            3'b010: begin  // SH
                dmem_wmask = 8'b00000011 << {dmem_waddr[1], 1'b0};
                dmem_wdata_aligned = dmem_wdata << {dmem_waddr[1], 1'b0, 3'b000};
            end
            3'b100: begin  // SW
                dmem_wmask = 8'b00001111;
                dmem_wdata_aligned = dmem_wdata;
            end
            default: begin
                dmem_wmask = 8'b0;
                dmem_wdata_aligned = dmem_wdata;
            end
        endcase
    end
`endif

    // ========================================
    // 多周期访问控制
    // ========================================
    // 为了演示多周期访问，我们添加延迟计数器
    // 实际应用中，这些信号会由真实的内存控制器产生

    // 取指通道状态
    reg imem_busy;
    reg [1:0] imem_delay_cnt;

    // 访存通道状态
    reg dmem_busy;
    reg [1:0] dmem_delay_cnt;

    // 取指通道读操作（多周期）
    // 保持上一次读取的数据，直到新的读请求完成
    reg [31:0] imem_rdata_buf;

    always @(*) begin
        // 仅在当前未返回数据时发起新的读请求，避免覆盖有效数据
        if (imem_ren && !imem_busy && !imem_rvalid) begin
`ifndef SYNTHESIS
            imem_rdata = pmem_read(imem_addr);
`else
            imem_rdata = yosys_imem_rdata;
`endif
        end else begin
            imem_rdata = imem_rdata_buf;  // 保持上一次的数据
        end
    end

    // 缓冲读取的数据
    always @(posedge clk) begin
        if (imem_ren && !imem_busy && !imem_rvalid) begin
            imem_rdata_buf <= imem_rdata;
        end
    end

    // 取指通道valid信号生成（时序逻辑）
    always @(posedge clk) begin
        if (rst) begin
            imem_rvalid <= 1'b0;
            imem_busy <= 1'b0;
            imem_delay_cnt <= 2'b0;
        end else begin
            if (imem_rvalid && imem_ready) begin
                imem_rvalid <= 1'b0;
            end else if (imem_ren && !imem_busy && !imem_rvalid) begin
                // 新的读请求：开始延迟计数（模拟1周期延迟）
                imem_busy <= 1'b1;
                imem_delay_cnt <= 2'd1;
                imem_rvalid <= 1'b0;
            end else if (imem_busy) begin
                if (imem_delay_cnt > 0) begin
                    imem_delay_cnt <= imem_delay_cnt - 1;
                    imem_rvalid <= 1'b0;
                end else begin
                    // 延迟结束，数据有效（保持到 ready 为止）
                    imem_rvalid <= 1'b1;
                    imem_busy <= 1'b0;
                end
            end
        end
    end

    // 访存通道读操作（多周期）
    // 保持上一次读取的数据，直到新的读请求完成
    reg [31:0] dmem_rdata_buf;

    always @(*) begin
        if (dmem_ren && !dmem_busy && !dmem_rvalid) begin
`ifndef SYNTHESIS
            dmem_rdata = pmem_read(dmem_raddr);
`else
            dmem_rdata = yosys_dmem_rdata;
`endif
        end else begin
            dmem_rdata = dmem_rdata_buf;  // 保持上一次的数据
        end
    end

    // 缓冲读取的数据
    always @(posedge clk) begin
        if (dmem_ren && !dmem_busy && !dmem_rvalid) begin
            dmem_rdata_buf <= dmem_rdata;
        end
    end

    // 访存通道valid信号生成（时序逻辑）
    always @(posedge clk) begin
        if (rst) begin
            dmem_rvalid <= 1'b0;
            dmem_busy <= 1'b0;
            dmem_delay_cnt <= 2'b0;
        end else begin
            if (dmem_rvalid && dmem_rready) begin
                dmem_rvalid <= 1'b0;
            end else if (dmem_ren && !dmem_busy && !dmem_rvalid) begin
                // 新的读请求：开始延迟计数（模拟1周期延迟）
                dmem_busy <= 1'b1;
                dmem_delay_cnt <= 2'd1;
                dmem_rvalid <= 1'b0;
            end else if (dmem_busy) begin
                if (dmem_delay_cnt > 0) begin
                    dmem_delay_cnt <= dmem_delay_cnt - 1;
                    dmem_rvalid <= 1'b0;
                end else begin
                    // 延迟结束，数据有效（保持到 ready 为止）
                    dmem_rvalid <= 1'b1;
                    dmem_busy <= 1'b0;
                end
            end
        end
    end

    // 访存通道写操作（时序逻辑）
    always @(posedge clk) begin
        if (rst) begin
            dmem_wready <= 1'b1;  // 写操作总是ready（当前实现）
        end else begin
            dmem_wready <= 1'b1;
            if (dmem_wvalid && dmem_wready && dmem_wen) begin
`ifndef SYNTHESIS
                if (dmem_wmask != 8'b0) begin
                    pmem_write(dmem_waddr, dmem_wdata_aligned, dmem_wmask);
                end
`endif
            end
        end
    end

endmodule
