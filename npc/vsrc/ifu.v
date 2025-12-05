`timescale 1ns / 1ps
module ifu (
    input wire clk,
    input wire rst,
    input wire idu_ready,
    output reg [31:0] inst,
    output reg ifu_valid,
    output reg [31:0] ifu_addr,
    input wire [31:0] ifu_data,
    input wire ifu_ready
);
    reg [31:0] pc;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            pc <= 32'h0;
            ifu_valid <= 1'b0;
            inst <= 32'h0;
            ifu_addr <= 32'h0;
        end else if (idu_ready && ifu_ready) begin
            pc <= pc + 4;
            ifu_addr <= pc;
            inst <= ifu_data;
            ifu_valid <= 1'b1;
        end else begin
            ifu_valid <= 1'b0;
        end
    end
endmodule

