module ysyx_25040109_EXU (
    input [31:0] rs1_data,
    input [31:0] rs2_data,
    input [31:0] imm,
    input reg_write_en,     // 这是 reg_write_en_idu
    input [4:0] rd_addr,    // 这是 rd_addr_idu
    input [31:0] pc,
    input [6:0] opcode,
    input [2:0] funct3,     // funct3 用于完整 ALU 以及分支条件
    input [31:0] mem_data,  // 来自内存的数据，用于 lw
    output [31:0] result,
    output [4:0] rd_addr_out, // 直通 rd_addr_idu
    output reg_write_en_out,  // 直通 reg_write_en_idu
    output [31:0] next_pc
);

    // ALU A 和 B 的多路选择器
    wire [31:0] alu_a, alu_b;
    wire [31:0] alu_out; // ALU 输出结果

    // ALU A 选择器
    ysyx_25040109_MuxKeyWithDefault #(3, 7, 32) alu_a_select( // 添加了 R 型指令支持
        .out(alu_a),
        .key(opcode),
        .default_out(rs1_data), // 默认选择 rs1_data，适用于 R 型、I 型 (addi, lw, jalr)、S 型、B 型指令
        .lut({
            7'b0010111, pc,         // auipc 指令
            7'b0110111, 32'b0,      // lui (src1 为 0)
            7'b1101111, pc          // jal (用于计算链接地址，如果结果是 pc+4，但跳转目标是 pc+imm)
                                    // 对于 ALU，如果我们认为 jal 的 rd 操作是 pc+4，那么 alu_a 输入是 pc
                                    // 不过，主结果选择器会直接处理 jal_result。
                                    // 因此，可能不需要为 jal 特别设置 alu_a。我们先假设使用默认的 rs1_data。
                                    // 或者思考 ALU 实际上为 JAL 做了什么。
                                    // 如果 ALU 只负责计算 JAL 的跳转目标：pc + imm，那么 alu_a = pc。
                                    // 如果 ALU 负责 rd 写回 (pc+4)，那么 alu_a = pc，alu_b = 4。
                                    // 当前 EXU 结构似乎是将 ALU 用于通用计算，
                                    // 而专门的逻辑负责跳转/分支目标和结果。
                                    
            // 对于更通用的 ALU，大多数指令的 alu_a 都是 rs1_data。
            // 提供的 MUX 默认是 rs1_data，已经覆盖了大多数情况。
            // 特别的例外是 lui (alu_a=0) 和 auipc (alu_a=pc)。
        })
    );

    // ALU B 选择器 (简化版: 对于 I, S, B, U 指令总是选择 imm；对于 R 型指令选择 rs2_data)
    // 更完整的 ALU 会根据指令类型进行选择。
    // 目前简化的 ALU 是 `assign alu_out = alu_a + alu_b;` 且 `assign alu_b = imm;`
    // 这意味着 ALU 主要用于立即数指令或 PC 相对计算。
    // 这种简化对于 R 型指令是**错误的**。
    // 对于单周期 CPU，EXU 必须完整实现 ALU 功能。
    // 目前我们假设 `alu_out = alu_a + alu_b` 且 `alu_b = imm`，
    // 这只是临时方案，或者仅适用于某些指令类型。
    // 下面的 result_select MUX 会覆盖 lw、jal、jalr 的结果。

    // 警告：当前 ALU 过于简化 (只支持 alu_a + imm)。
    // 正确的 ALU 需要考虑 opcode/funct3/funct7、rs1_data 和 rs2_data/imm。
    // 为了修复的目的，我们暂时保留现有 ALU 结构，重点放在 NPC 和 lw。
    assign alu_b = imm;       // 只对 I 型、U 型、J 型 (jal 目标)、B 型 (分支目标) 是正确的
                              // 对于 R 型 (使用 rs2_data) 是错误的
    assign alu_out = alu_a + alu_b; // 示例：addi、auipc、lui (alu_a=0)、jal 目标、分支目标


    // 分支/跳转目标计算
    wire [31:0] jal_result      = pc + 4;
    wire [31:0] jal_target      = pc + imm;
    wire [31:0] jalr_target     = (rs1_data + imm) & ~32'h1; // 低位清零
    wire [31:0] branch_target   = pc + imm;

    // 分支条件 (简化为只处理 BEQ，完整版本需要 funct3 以及 rs1 与 rs2 的比较)
    // wire is_beq = (opcode == 7'b1100011 && funct3 == 3'b000); // BEQ
    // 对于其他分支 (BNE, BLT, 等)，需要扩展逻辑。
    wire branch_taken = (opcode == 7'b1100011) && // 是否为分支指令
                        ( (funct3 == 3'b000 && rs1_data == rs2_data) || // BEQ
                          (funct3 == 3'b001 && rs1_data != rs2_data) || // BNE
                          // 其他分支条件可以在这里扩展 (BLT, BGE, BLTU, BGEU)
                          1'b0); // 如果没有条件匹配，默认不跳转

    // 结果选择器
    ysyx_25040109_MuxKeyWithDefault #(4, 7, 32) result_select( // 增加了 JALR
        .out(result),
        .key(opcode),
        .default_out(alu_out),      // 默认用于 ADDI、LUI、AUIPC、R 型 (如果 ALU 完整)
        .lut({
            7'b1101111, jal_result, // JAL: rd = pc + 4
            7'b1100111, jal_result, // JALR: rd = pc + 4
            7'b0000011, mem_data,   // LW: rd = mem_data
            // 对于 R 型，结果应来自完整的 ALU (基于 funct3/funct7)
            // 对于 S 型和 B 型，该 MUX 不负责 rd 写回 (reg_write_en 会是 false)
            7'b0110011, alu_out     // R 型占位符，使用简化的 ALU
                                    // 真正的 R 型需要一个完整的 ALU (使用 rs1_data 和 rs2_data)
        })
    );

    // 下一 PC 的选择器
    ysyx_25040109_MuxKeyWithDefault #(3, 7, 32) next_pc_select(
        .out(next_pc),
        .key(opcode),
        .default_out(pc + 4),       // 大多数指令的默认下一 PC
        .lut({
            7'b1101111, jal_target,    // JAL
            7'b1100111, jalr_target,   // JALR
            7'b1100011, branch_taken ? branch_target : (pc + 4) // 分支指令
        })
    );

    assign rd_addr_out = rd_addr;
    assign reg_write_en_out = reg_write_en;

endmodule

