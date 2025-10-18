module ysyx_25040109_MEM (
    input clk,
    input rst,
    
    // 取指通道（imem - Instruction Memory）
    input [31:0] imem_addr,        // 取指地址
    input imem_ren,                // 取指使能
    output reg [31:0] imem_rdata,  // 指令数据
    
    // 访存通道（dmem - Data Memory）
    // 读通道
    input [31:0] dmem_raddr,       // 数据读地址
    input dmem_ren,                // 数据读使能
    output reg [31:0] dmem_rdata,  // 数据读结果
    
    // 写通道
    input [31:0] dmem_waddr,       // 数据写地址
    input [31:0] dmem_wdata,       // 数据写数据
    input [2:0] dmem_wlen,         // 写长度（3'b001=字节, 3'b010=半字, 3'b100=字）
    input dmem_wen,                // 数据写使能
    
`ifdef SYNTHESIS
    input [31:0] yosys_imem_rdata, // 综合模式：取指数据
    input [31:0] yosys_dmem_rdata  // 综合模式：访存数据
`endif
);

`ifndef SYNTHESIS
    import "DPI-C" function void verilog_pmem_read(input int addr, output int data);
    import "DPI-C" function void verilog_pmem_write(input int addr, input int data, input int len);
`endif

    // 取指通道读操作（组合逻辑）
    always @(*) begin
        if (imem_ren) begin
`ifndef SYNTHESIS
            verilog_pmem_read(imem_addr, imem_rdata);
`else
            imem_rdata = yosys_imem_rdata;
`endif
        end else begin
            imem_rdata = 32'h00000013;  // NOP指令
        end
    end

    // 访存通道读操作（组合逻辑）
    always @(*) begin
        if (dmem_ren) begin
`ifndef SYNTHESIS
            verilog_pmem_read(dmem_raddr, dmem_rdata);
`else
            dmem_rdata = yosys_dmem_rdata;
`endif
        end else begin
            dmem_rdata = 32'h0;
        end
    end

    // 访存通道写操作（时序逻辑）
    always @(posedge clk) begin
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

endmodule
