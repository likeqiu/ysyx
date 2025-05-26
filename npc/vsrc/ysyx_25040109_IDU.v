module ysyx_25040109_IDU (
    input [31:0] inst,
    output [4:0] rd_addr,
    output [31:0] imm,
    output reg_write_en,
    input [31:0] rs1_data,
/* verilator lint_off UNUSEDSIGNAL */
    input [31:0] rs2_data,
/* verilator lint_on UNUSEDSIGNAL */
    output [31:0] rs1_data_out
);
    wire [6:0] opcode = inst[6:0];
  //  wire [2:0] funct3 = inst[14:12];
    wire [11:0] imm_i = inst[31:20];
    wire [19:0] imm_u = inst[31:12];
    wire [20:1] imm_j = {inst[31], inst[19:12], inst[20], inst[30:21]};
    wire [11:0] imm_s = {inst[31:25], inst[11:7]};
    wire [12:1] imm_b = {inst[31], inst[7], inst[30:25], inst[11:8]};

    wire [31:0] imm_i_ext = {{20{imm_i[11]}}, imm_i};
    wire [31:0] imm_u_ext = {imm_u, 12'b0};
    wire [31:0] imm_j_ext = {{11{imm_j[20]}}, imm_j, 1'b0};
    wire [31:0] imm_s_ext = {{20{imm_s[11]}}, imm_s};
    wire [31:0] imm_b_ext = {{19{imm_b[12]}}, imm_b, 1'b0};

    ysyx_25040109_MuxKeyWithDefault #(7, 7, 32) imm_select
    (
        .out(imm),
        .key(opcode),
        .default_out(32'b0), // inv or default to 0
        .lut({
            7'b0010111, imm_u_ext, // auipc
            7'b0110111, imm_u_ext, // lui
            7'b0010011, imm_i_ext, // addi, slti, sltiu, xori, ori, andi, slli, srli, srai
            7'b0000011, imm_i_ext, // lb, lh, lw, lbu, lhu, jalr
            7'b0100011, imm_s_ext, // sb, sh, sw
            7'b1101111, imm_j_ext, // jal
            7'b1100011, imm_b_ext  // beq, bne, blt, bge, bltu, bgeu
        })
    );

    assign rd_addr = inst[11:7];

    // Updated reg_write_select to include R-type, I-type (ALU, Load, JAL, JALR), U-type.
    // S-type and B-type do not write to rd.
    // This is a simplified example; a full RISC-V would have more detailed conditions.
    ysyx_25040109_MuxKeyWithDefault #(7, 7, 1) reg_write_select ( // Key is opcode only now
        .out(reg_write_en),
        .key(opcode),
        .default_out(1'b0), // Default to no write
        .lut({
            7'b0110111, 1'b1, // lui
            7'b0010111, 1'b1, // auipc
            7'b1101111, 1'b1, // jal
            7'b1100111, 1'b1, // jalr
            7'b0000011, 1'b1, // lb, lh, lw, lbu, lhu
            7'b0010011, 1'b1, // addi, slti, sltiu, xori, ori, andi, slli, srli, srai
            7'b0110011, 1'b1  // add, sub, sll, slt, sltu, xor, srl, sra, or, and (R-type)
            // Note: Store (0100011) and Branch (1100011) opcodes are not listed, so they get default_out (1'b0)
        })
    );

    assign rs1_data_out=rs1_data;

endmodule


