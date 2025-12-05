`timescale 1ns / 1ps
module lsu_mem (
    input wire clk,
    input wire rst,
    input wire [31:0] addr,
    input wire [31:0] wdata,
    output reg [31:0] rdata,
    input wire [1:0] op, // 00: idle, 01: lw, 10: lbu, 11: sw
    input wire valid,
    output reg ready
);

    `ifndef SYNTHESIS
    import "DPI-C" function void verilog_pmem_read(input int addr, output int data);
    import "DPI-C" function void verilog_pmem_write(input int addr, input int data, input int len);
    `endif

    reg [31:0] len;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            rdata <= 32'h0;
            ready <= 1'b1;
            len <= 32'h0;
        end else if (valid) begin
            ready <= 1'b0;
            case (op)
                2'b01: begin // lw
                    `ifndef SYNTHESIS
                    verilog_pmem_read(addr, rdata);
                    `else
                    rdata <= 32'h0;
                    `endif
                end
                2'b10: begin // lbu
                    `ifndef SYNTHESIS
                    verilog_pmem_read(addr, rdata);
                    rdata <= {{24{1'b0}}, rdata[7:0]};
                    `else
                    rdata <= 32'h0;
                    `endif
                end
                2'b11: begin // sw
                    len <= 4;
                    `ifndef SYNTHESIS
                    verilog_pmem_write(addr, wdata, len);
                    `endif
                end
                2'b00: begin // sb (重用 00 作为 sb，实际应为 10)
                    len <= 1;
                    `ifndef SYNTHESIS
                    verilog_pmem_write(addr, wdata, len);
                    `endif
                end
                default: begin
                    rdata <= 32'h0;
                end
            endcase
            ready <= 1'b1;
        end else begin
            ready <= 1'b1;
        end
    end

endmodule


