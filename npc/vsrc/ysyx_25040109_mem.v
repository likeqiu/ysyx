module ysyx_25040109_MEM (
    input clk,
    input rst,

    // 取指通道（imem - Instruction Memory）
    input [31:0] imem_addr,        // 取指地址
    input imem_ren,                // 取指使能
    output reg [31:0] imem_rdata,  // 指令数据
    output reg imem_rvalid,        // 指令数据有效信号（握手协议）

    // 访存通道（dmem - Data Memory）
    // 读通道
    input [31:0] dmem_raddr,       // 数据读地址
    input dmem_ren,                // 数据读使能
    output reg [31:0] dmem_rdata,  // 数据读结果
    output reg dmem_rvalid,        // 数据读有效信号（握手协议）

    // 写通道
    input [31:0] dmem_waddr,       // 数据写地址
    input [31:0] dmem_wdata,       // 数据写数据
    input [2:0] dmem_wlen,         // 写长度（3'b001=字节, 3'b010=半字, 3'b100=字）
    input dmem_wen,                // 数据写使能
    output reg dmem_wready         // 数据写准备好信号（握手协议）

`ifdef SYNTHESIS
    ,
    input [31:0] yosys_imem_rdata, // 综合模式：取指数据
    input [31:0] yosys_dmem_rdata  // 综合模式：访存数据
`endif
);

`ifndef SYNTHESIS
    import "DPI-C" function void verilog_pmem_read(input int addr, output int data);
    import "DPI-C" function void verilog_pmem_write(input int addr, input int data, input int len);
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
            verilog_pmem_read(imem_addr, imem_rdata);
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
            if (imem_ren && !imem_busy && !imem_rvalid) begin
                // 新的读请求：开始延迟计数（模拟1周期延迟）
                imem_busy <= 1'b1;
                imem_delay_cnt <= 2'd1;
                imem_rvalid <= 1'b0;
            end else if (imem_busy) begin
                if (imem_delay_cnt > 0) begin
                    imem_delay_cnt <= imem_delay_cnt - 1;
                    imem_rvalid <= 1'b0;
                end else begin
                    // 延迟结束，数据有效
                    imem_rvalid <= 1'b1;
                    imem_busy <= 1'b0;
                end
            end else begin
                imem_rvalid <= 1'b0;
            end
        end
    end

    // 访存通道读操作（多周期）
    // 保持上一次读取的数据，直到新的读请求完成
    reg [31:0] dmem_rdata_buf;

    always @(*) begin
        if (dmem_ren && !dmem_busy && !dmem_rvalid) begin
`ifndef SYNTHESIS
            verilog_pmem_read(dmem_raddr, dmem_rdata);
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
            if (dmem_ren && !dmem_busy && !dmem_rvalid) begin
                // 新的读请求：开始延迟计数（模拟1周期延迟）
                dmem_busy <= 1'b1;
                dmem_delay_cnt <= 2'd1;
                dmem_rvalid <= 1'b0;
            end else if (dmem_busy) begin
                if (dmem_delay_cnt > 0) begin
                    dmem_delay_cnt <= dmem_delay_cnt - 1;
                    dmem_rvalid <= 1'b0;
                end else begin
                    // 延迟结束，数据有效
                    dmem_rvalid <= 1'b1;
                    dmem_busy <= 1'b0;
                end
            end else begin
                dmem_rvalid <= 1'b0;
            end
        end
    end

    // 访存通道写操作（时序逻辑）
    always @(posedge clk) begin
        if (rst) begin
            dmem_wready <= 1'b1;  // 写操作总是ready（简化实现）
        end else begin
            dmem_wready <= 1'b1;
            if (!rst && dmem_wen) begin
                case (dmem_wlen)
                    3'b001: begin  // 字节写（SB）
`ifndef SYNTHESIS
                        verilog_pmem_write(dmem_waddr, dmem_wdata, 1);
`endif
                    end
                    3'b010: begin  // 半字写（SH）
`ifndef SYNTHESIS
                        verilog_pmem_write(dmem_waddr, dmem_wdata, 2);
`endif
                    end
                    3'b100: begin  // 字写（SW）
`ifndef SYNTHESIS
                        verilog_pmem_write(dmem_waddr, dmem_wdata, 4);
`endif
                    end
                    default: begin
                    end
                endcase
            end
        end
    end

endmodule
