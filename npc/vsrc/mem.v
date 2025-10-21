// 内存模块 - 支持指令获取和数据访问
module mem(
    input rst,
    
    // 指令端口 (IFU)
    input [31:0] ifu_addr,
    output [31:0] ifu_rdata,
    
    // 数据端口 (LSU)
    input [31:0] dsu_addr,
    input [31:0] dsu_wdata,
    input [1:0] dsu_wstrb,      // 写使能：bit0=字节0, bit1=字节1(或字)
    output [31:0] dsu_rdata,
    input dsu_valid
);

    reg [31:0] ifu_inst;
    reg [31:0] dsu_data;
    
    `ifndef SYNTHESIS
    import "DPI-C" function void verilog_pmem_read(input int addr, output int data);
    import "DPI-C" function void verilog_pmem_write(input int addr, input int data, input int len);
    `endif
    
    // IFU端口 - 只读，组合逻辑
    wire ifu_addr_valid = (ifu_addr >= 32'h80000000) && (ifu_addr <= 32'h87FFFFFF);
    
    always @(*) begin
        if (rst || !ifu_addr_valid) begin
            // 复位期间或地址非法返回NOP，避免访问非法地址
            ifu_inst = 32'h00000013;
        end else begin
            `ifndef SYNTHESIS
            verilog_pmem_read(ifu_addr, ifu_inst);
            `else
            ifu_inst = 32'h00000013;  // NOP
            `endif
        end
    end
    
    assign ifu_rdata = ifu_inst;
    
    // DSU端口 - 支持读写
    wire dsu_addr_valid = (dsu_addr >= 32'h80000000) && (dsu_addr <= 32'h87FFFFFF);
    
    always @(*) begin
        if (dsu_valid && dsu_addr_valid && |dsu_wstrb) begin
            // 写操作
            `ifndef SYNTHESIS
            case (dsu_wstrb)
                2'b01: verilog_pmem_write(dsu_addr, dsu_wdata, 1);  // 1字节
                2'b11: verilog_pmem_write(dsu_addr, dsu_wdata, 2);  // 2字节
                default: ;
            endcase
            `endif
        end else if (dsu_valid && dsu_addr_valid && dsu_wstrb == 2'b00) begin
            // 读操作
            `ifndef SYNTHESIS
            verilog_pmem_read(dsu_addr, dsu_data);
            `else
            dsu_data = 32'h0;
            `endif
        end
    end
    
    assign dsu_rdata = dsu_data;

endmodule
