module ysyx_25040109_MEM (
    input clk,
    input rst,
    
    // 取指通道（imem - Instruction Memory）- 握手协议
    input [31:0] imem_addr,        // 取指地址
    input imem_valid,              // 取指请求有效
    output reg imem_ready,         // MEM准备好接收请求
    output reg [31:0] imem_rdata,  // 指令数据
    output reg imem_rdata_valid,   // 指令数据有效
    input imem_rdata_ready,        // CPU准备好接收数据
    
    // 访存通道（dmem - Data Memory）- 握手协议
    // Load读通道（握手）
    input [31:0] dmem_raddr,       // 数据读地址
    input dmem_rvalid,             // Load请求有效
    output reg dmem_rready,        // MEM准备好接收Load请求
    output reg [31:0] dmem_rdata,  // 数据读结果
    output reg dmem_rdata_valid,   // Load数据有效
    input dmem_rdata_ready,        // CPU准备好接收数据
    
    // Store写通道（握手）
    input [31:0] dmem_waddr,       // 数据写地址
    input [31:0] dmem_wdata,       // 数据写数据
    input [2:0] dmem_wlen,         // 写长度（3'b001=字节, 3'b010=半字, 3'b100=字）
    input dmem_wvalid,             // Store请求有效
    output reg dmem_wready         // MEM准备好接收Store请求
    
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

    // 取指通道握手协议状态机
    localparam IMEM_IDLE = 2'b00;
    localparam IMEM_READ = 2'b01;
    localparam IMEM_RESP = 2'b10;
    
    reg [1:0] imem_state;
    reg [31:0] imem_addr_buf;  // 锁存地址
    reg [31:0] imem_data_buf;  // 数据缓冲
    
    always @(posedge clk) begin
        if (rst) begin
            imem_state <= IMEM_IDLE;
            imem_ready <= 1'b1;
            imem_rdata_valid <= 1'b0;
            imem_rdata <= 32'h00000013;
            imem_addr_buf <= 32'h0;
        end else begin
            case (imem_state)
                IMEM_IDLE: begin
                    if (imem_valid && imem_ready) begin
                        // 接收取指请求
                        imem_addr_buf <= imem_addr;
                        imem_ready <= 1'b0;
                        imem_state <= IMEM_READ;
                    end
                end
                
                IMEM_READ: begin
                    // 模拟1周期内存访问延迟
`ifndef SYNTHESIS
                    verilog_pmem_read(imem_addr_buf, imem_data_buf);
`else
                    imem_data_buf = yosys_imem_rdata;
`endif
                    imem_rdata <= imem_data_buf;
                    imem_rdata_valid <= 1'b1;
                    imem_state <= IMEM_RESP;
                end
                
                IMEM_RESP: begin
                    if (imem_rdata_ready) begin
                        // CPU接收了数据，完成握手
                        imem_rdata_valid <= 1'b0;
                        imem_ready <= 1'b1;
                        imem_state <= IMEM_IDLE;
                    end
                    // 否则保持RESP状态，等待CPU准备好
                end
                
                default: begin
                    imem_state <= IMEM_IDLE;
                    imem_ready <= 1'b1;
                    imem_rdata_valid <= 1'b0;
                end
            endcase
        end
    end

    // 访存通道Load握手协议状态机
    localparam DMEM_IDLE = 2'b00;
    localparam DMEM_READ = 2'b01;
    localparam DMEM_RESP = 2'b10;
    
    reg [1:0] dmem_state;
    reg [31:0] dmem_raddr_buf;  // 锁存读地址
    reg [31:0] dmem_data_buf;   // 数据缓冲
    
    always @(posedge clk) begin
        if (rst) begin
            dmem_state <= DMEM_IDLE;
            dmem_rready <= 1'b1;
            dmem_rdata_valid <= 1'b0;
            dmem_rdata <= 32'h0;
            dmem_raddr_buf <= 32'h0;
        end else begin
            case (dmem_state)
                DMEM_IDLE: begin
                    if (dmem_rvalid && dmem_rready) begin
                        // 接收Load请求
                        dmem_raddr_buf <= dmem_raddr;
                        dmem_rready <= 1'b0;
                        dmem_state <= DMEM_READ;
                    end
                end
                
                DMEM_READ: begin
                    // 模拟1周期内存访问延迟
`ifndef SYNTHESIS
                    verilog_pmem_read(dmem_raddr_buf, dmem_data_buf);
`else
                    dmem_data_buf = yosys_dmem_rdata;
`endif
                    dmem_rdata <= dmem_data_buf;
                    dmem_rdata_valid <= 1'b1;
                    dmem_state <= DMEM_RESP;
                end
                
                DMEM_RESP: begin
                    if (dmem_rdata_ready) begin
                        // CPU接收了数据，完成握手
                        dmem_rdata_valid <= 1'b0;
                        dmem_rready <= 1'b1;
                        dmem_state <= DMEM_IDLE;
                    end
                    // 否则保持RESP状态，等待CPU准备好
                end
                
                default: begin
                    dmem_state <= DMEM_IDLE;
                    dmem_rready <= 1'b1;
                    dmem_rdata_valid <= 1'b0;
                end
            endcase
        end
    end
    
    // Store通道：fire-and-forget模式（不阻塞流水线）
    always @(posedge clk) begin
        if (rst) begin
            dmem_wready <= 1'b1;
        end else begin
            // 总是准备好接收Store请求
            dmem_wready <= 1'b1;
            
            if (dmem_wvalid && dmem_wready) begin
                // 接收Store请求并立即写入
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
