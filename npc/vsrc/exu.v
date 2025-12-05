`timescale 1ns / 1ps
module exu (
    input wire clk,
    input wire rst,
    input wire [31:0] rs1_data,
    input wire [31:0] rs2_data,
    input wire [4:0] rs1_addr,
    input wire [4:0] rs2_addr,
    input wire [4:0] rd_addr,
    input wire [31:0] imm,
    input wire [3:0] alu_op,
    input wire [1:0] mem_op,
    input wire reg_write,
    input wire jalr,
    input wire idu_valid,
    output reg exu_ready,
    output reg [31:0] lsu_addr,
    output reg [31:0] lsu_wdata,
    output reg [1:0] lsu_mem_op,
    output reg lsu_valid,
    input wire lsu_ready,
    output reg [4:0] regfile_rd_addr,
    output reg [31:0] regfile_rd_data,
    output reg regfile_write
);
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            exu_ready <= 1'b1;
            lsu_valid <= 1'b0;
            regfile_write <= 1'b0;
            lsu_addr <= 32'h0;
            lsu_wdata <= 32'h0;
            lsu_mem_op <= 2'h0;
            regfile_rd_addr <= 5'h0;
            regfile_rd_data <= 32'h0;
        end else if (idu_valid && lsu_ready) begin
            exu_ready <= 1'b0;
            lsu_valid <= (mem_op != 2'h0);
            lsu_mem_op <= mem_op;
            lsu_wdata <= rs2_data;
            regfile_rd_addr <= rd_addr;
            regfile_write <= reg_write && (mem_op == 2'h0);

            case (alu_op)
                4'h1: begin // ADD
                    lsu_addr <= rs1_data + imm;
                    regfile_rd_data <= jalr ? (rs1_data + imm) : (rs1_data + imm);
                end
                4'h2: begin // LUI
                    regfile_rd_data <= imm;
                end
                default: begin
                    regfile_rd_data <= 32'h0;
                end
            endcase
        end else begin
            exu_ready <= 1'b1;
            lsu_valid <= 1'b0;
            regfile_write <= 1'b0;
        end
    end
endmodule

