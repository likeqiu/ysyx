module ysyx_25040109_top (
    input clk,
    input rst,
    input [31:0] inst,
    output [31:0] pc,
    output [31:0] a0_out
);
    wire [31:0] next_pc, inst_ifu, rs1_data, imm, result, rs1_data_out;
    wire [4:0] rd_addr_idu, rd_addr_exu;
    wire reg_write_en_idu, reg_write_en_exu;
    wire [6:0] opcode = inst_ifu[6:0];

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

    ysyx_25040109_RegisterFile #(32, 32) regfile (
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
        .rd_addr(rd_addr_idu),
        .rd_addr_out(rd_addr_exu),
        .reg_write_en_out(reg_write_en_exu),
        .pc(pc), 
        .opcode(opcode), 
        .result(result)

    );

    wire is_jal=(opcode==7'b1101111);
    wire is_jalr=(opcode==7'b1100111 && inst_ifu[14:12] == 3'b000);
    wire [31:0] jal_target = pc+imm;
    wire [31:0] jalr_target = (rs1_data_out +imm ) & ~1;
    assign next_pc = is_jal ? jal_target : (is_jalr ? jalr_target : pc+4);

    assign a0_out=regfile.rf[10]; 

    import "DPI-C" function int printf_finish(int inst);

    always @(posedge clk) begin
        if (!rst) begin
            $display("PC=0x%h, inst=0x%h, t0(x5)=0x%h, t1(x6)=0x%h",
                     pc, inst_ifu, regfile.rf[5], regfile.rf[6]);
        end

        if(printf_finish(inst) == 0)
        $finish;

    end
endmodule

