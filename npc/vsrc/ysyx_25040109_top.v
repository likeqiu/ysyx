module ysyx_25040109_top (
    input clk,
    input rst,
    input [31:0] inst,
    output [31:0] pc
);
    wire [31:0] next_pc, inst_ifu, rs1_data, imm, result, rs1_data_out;
    wire [4:0] rd_addr_idu, rd_addr_exu;
    wire reg_write_en_idu, reg_write_en_exu;

    ysyx_25040109_Reg #(32, 32'h80000000) pc_reg (
        .clk(clk),
        .rst(rst),
        .din(next_pc),
        .dout(pc),
        .wen(1'b1)
    );

    ysyx_25040109_IFU ifu (
        .clk(clk),
        .pc(pc),
        .inst(inst),
        .inst_ifu(inst_ifu)
    );

    ysyx_25040109_RegisterFile #(5, 32) regfile (
        .clk(clk),
        .wdata(result),
        .waddr(rd_addr_exu),
        .wen(reg_write_en_exu),
        .raddr1(inst_ifu[19:15]),
        .rdata1(rs1_data)
    );

    ysyx_25040109_IDU idu (
        .inst(inst_ifu),
        .rd_addr(rd_addr_idu),
        .imm(imm),
        .reg_write_en(reg_write_en_idu),
        .rs1_data(rs1_data),
        .rs1_data_out(rs1_data_out)
    );

    ysyx_25040109_EXU exu (
        .rs1_data(rs1_data_out),
        .imm(imm),
        .reg_write_en(reg_write_en_idu),
        .result(result),
        .rd_addr(rd_addr_idu),
        .rd_addr_out(rd_addr_exu),
        .reg_write_en_out(reg_write_en_exu)
    );

    assign next_pc = pc + 4;

    import "DPI-C" function int printf_finish(input vluint32_t inst);

    always @(posedge clk) begin
        if (!rst) begin
            $display("PC=0x%h, inst=0x%h, t0(x5)=0x%h, t1(x6)=0x%h",
                     pc, inst_ifu, regfile.rf[5], regfile.rf[6]);
        end

        if(printf_finish(inst))
        $finish;

    end
endmodule

