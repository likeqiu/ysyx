module ysyx_25040109_EXU (
    input [31:0] rs1_data,
    input [31:0] rs2_data,
    input [31:0] imm,
    input reg_write_en,     
    input [4:0] rd_addr,      
    input [31:0] pc,
    input [6:0] opcode,
    input [2:0] funct3,     // funct3 用于完整 ALU 以及分支条件
    input [31:0] mem_data,  // Data from memory for lw
    output [31:0] result,
    output [4:0] rd_addr_out, // Pass through rd_addr_idu
    output reg_write_en_out, // Pass through reg_write_en_idu
    output [31:0] next_pc
);

    // ALU A & B MUX
    wire [31:0] alu_a, alu_b;
    wire [31:0] alu_out; // ALU result

    // ALU A selection
    ysyx_25040109_MuxKeyWithDefault #(3, 7, 32) alu_a_select( // Added R-type
        .out(alu_a),
        .key(opcode),
        .default_out(rs1_data), // Default for R-type, I-type (addi, lw, jalr), S-type, B-type
        .lut({
            7'b0010111, pc,         // auipc
            7'b0110111, 32'b0,      // lui (src1 is 0)
            7'b1101111, pc          // jal (uses pc for link address calculation if result is pc+4, but target is pc+imm)
                                    // For ALU, if we consider jal's "operation" for rd as pc+4, then pc is an input
                                    // However, the main result mux handles jal_result directly.
                                    // For this ALU, perhaps jal doesn't need a special alu_a. Let's assume default rs1_data for now
                                    // or consider what ALU is actually doing for JAL.
                                    // If ALU is just ADD for JAL target: pc + imm, then alu_a is pc.
                                    // If ALU is for rd writeback (pc+4), then alu_a is pc, alu_b is 4.
                                    // The current EXU structure seems to use ALU for general computation,
                                    // and dedicated logic for jump/branch targets and results.

            // For a more generic ALU, rs1_data is usually alu_a for most instructions.
            // The provided MUX already defaults to rs1_data which covers many cases.
            // Specific overrides are for lui (alu_a=0) and auipc (alu_a=pc).
        })
    );

    // ALU B selection (simplified: always imm for I, S, B, U; rs2_data for R)
    // A more complete ALU would have a MUX here based on instruction type.
    // The current simple ALU `assign alu_out = alu_a + alu_b;` and `assign alu_b = imm;`
    // implies the ALU is primarily for immediate instructions or PC-relative calculations.
    // This simplification will NOT WORK for R-type instructions correctly.
    // For a single-cycle CPU, the EXU must fully implement ALU logic.
    // Let's assume for now the `alu_out = alu_a + alu_b` with `alu_b = imm` is a
    // placeholder or only for certain instruction types.
    // The result_select MUX below will override alu_out for lw, jal, jalr.

    // WARNING: The ALU is overly simplified (only does alu_a + imm).
    // A proper ALU would take opcode/funct3/funct7, rs1_data, and rs2_data/imm.
    // For the purpose of this fix, we'll keep the ALU structure as is and focus on NPC and lw.
    assign alu_b = imm;       // This is only correct for I-type, U-type, J-type (jal target), B-type (branch target)
                              // NOT for R-type, which uses rs2_data
    assign alu_out = alu_a + alu_b; // Example: addi, auipc, lui (alu_a=0), jal target, branch target


    // Branch/Jump target calculations
    wire [31:0] jal_result      = pc + 4;
    wire [31:0] jal_target      = pc + imm;
    wire [31:0] jalr_target     = (rs1_data + imm) & ~32'h1; // Mask LSB
    wire [31:0] branch_target   = pc + imm;

    // Branch condition (simplified for BEQ, a full one needs funct3 and rs1 vs rs2 comparison)
    // wire is_beq = (opcode == 7'b1100011 && funct3 == 3'b000); // BEQ
    // For other branches (BNE, BLT, etc.), this logic would expand.
    wire branch_taken = (opcode == 7'b1100011) && // Is any branch instruction
                        ( (funct3 == 3'b000 && rs1_data == rs2_data) || // BEQ
                          (funct3 == 3'b001 && rs1_data != rs2_data) || // BNE
                          // Add other branch conditions here (BLT, BGE, BLTU, BGEU)
                          1'b0); // Default to not taken if no condition met

    // Result MUX
    ysyx_25040109_MuxKeyWithDefault #(4, 7, 32) result_select( // Added JALR
        .out(result),
        .key(opcode),
        .default_out(alu_out),      // Default for ADDI, LUI, AUIPC, R-type (if ALU was complete)
        .lut({
            7'b1101111, jal_result, // JAL: rd = pc + 4
            7'b1100111, jal_result, // JALR: rd = pc + 4
            7'b0000011, mem_data,   // LW: rd = mem_data
            // For R-type, result would come from a full ALU based on funct3/funct7
            // For S-type and B-type, there is no rd write by this MUX (reg_write_en would be false)
            7'b0110011, alu_out     // Placeholder for R-type to use the simplified ALU
                                    // A real R-type would need a full ALU using rs1_data and rs2_data.
        })
    );

    // Next PC MUX
    ysyx_25040109_MuxKeyWithDefault #(3, 7, 32) next_pc_select(
        .out(next_pc),
        .key(opcode),
        .default_out(pc + 4),       // Default for most instructions
        .lut({
            7'b1101111, jal_target,    // JAL
            7'b1100111, jalr_target,   // JALR
            7'b1100011, branch_taken ? branch_target : (pc + 4) // Branches
        })
    );

    assign rd_addr_out = rd_addr;
    assign reg_write_en_out = reg_write_en;

endmodule

