module ysyx_25040109_IDU (
    input [31:0] inst,
    // 握手
    input in_valid,
    output out_ready,
    output out_valid,
    input in_ready,

    output [4:0] rd_addr,
    output [31:0] imm,
    output reg_write_en_idu,
    output [2:0] funct3,
    output reg inst_invalid,

    output [11:0] csr_addr,
    
    // 指令字段
    output [6:0] opcode,
    output [4:0] rs1_addr,
    output [4:0] rs2_addr,
    
    // 类型标志
    output is_load,
    output is_store,
    output is_ecall,

    // 控制信号
    output reg [4:0] alu_op,
    output reg [1:0] alu_a_sel,
    output reg       alu_b_sel,
    output reg [1:0] result_sel,
    output           is_branch,
    output           is_jal,
    output           is_jalr,
    output [2:0]     branch_op,
    output reg [1:0] csr_op,
    output           is_mret
);
    // 直通握手
    assign out_ready = in_ready;
    assign out_valid = in_valid;
    assign opcode = inst[6:0];
    assign funct3 = inst[14:12];
    assign rs1_addr = inst[19:15];
    assign rs2_addr = inst[24:20];
    assign rd_addr = inst[11:7];

    wire [6:0] funct7 = inst[31:25];

    // 控制编码
    localparam [4:0] ALU_ADD  = 5'd0;
    localparam [4:0] ALU_SUB  = 5'd1;
    localparam [4:0] ALU_SLL  = 5'd2;
    localparam [4:0] ALU_SLT  = 5'd3;
    localparam [4:0] ALU_SLTU = 5'd4;
    localparam [4:0] ALU_XOR  = 5'd5;
    localparam [4:0] ALU_SRL  = 5'd6;
    localparam [4:0] ALU_SRA  = 5'd7;
    localparam [4:0] ALU_OR   = 5'd8;
    localparam [4:0] ALU_AND  = 5'd9;
    localparam [4:0] ALU_MUL  = 5'd10;
    localparam [4:0] ALU_MULH = 5'd11;
    localparam [4:0] ALU_DIV  = 5'd12;
    localparam [4:0] ALU_DIVU = 5'd13;
    localparam [4:0] ALU_REM  = 5'd14;
    localparam [4:0] ALU_REMU = 5'd15;

    localparam [1:0] ALU_A_RS1  = 2'b00;
    localparam [1:0] ALU_A_PC   = 2'b01;
    localparam [1:0] ALU_A_ZERO = 2'b10;

    localparam        ALU_B_RS2 = 1'b0;
    localparam        ALU_B_IMM = 1'b1;

    localparam [1:0] RES_ALU = 2'b00;
    localparam [1:0] RES_CSR = 2'b01;
    localparam [1:0] RES_PC4 = 2'b10;

    localparam [1:0] CSR_OP_NONE  = 2'b00;
    localparam [1:0] CSR_OP_CSRRW = 2'b01;
    localparam [1:0] CSR_OP_CSRRS = 2'b10;
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

    ysyx_25040109_MuxKeyWithDefault #(8, 7, 32) imm_select
    (
        .out(imm),
        .key(opcode),
        .default_out(32'b0), 
        .lut({
            7'b0010111, imm_u_ext, 
            7'b0110111, imm_u_ext, 
            7'b0010011, imm_i_ext, 
            7'b0000011, imm_i_ext,
            7'b1100111, imm_i_ext, 
            7'b0100011, imm_s_ext, 
            7'b1101111, imm_j_ext, 
            7'b1100011, imm_b_ext  
        })
    );


    wire valid_lui    = (opcode == 7'b0110111);
    wire valid_auipc  = (opcode == 7'b0010111);
    wire valid_jal    = (opcode == 7'b1101111);
    wire valid_jalr   = (opcode == 7'b1100111) && (funct3 == 3'b000);


        wire valid_load = (opcode == 7'b0000011) && (
            funct3 == 3'b000  ||
            funct3 == 3'b001 ||
            funct3 == 3'b010 ||
            funct3 == 3'b100 ||
            funct3 == 3'b101 

        );


        wire valid_store = (opcode == 7'b0100011) && (
            funct3 == 3'b000 ||
            funct3 == 3'b001 ||
            funct3 == 3'b010
            );

        wire valid_branch = (opcode == 7'b1100011) && (
            funct3 == 3'b000 ||
            funct3 == 3'b001 ||
            funct3 == 3'b101 ||
            funct3 == 3'b100 ||
            funct3 == 3'b110 ||
            funct3 == 3'b111
        ) ;


        wire valid_i_type = (opcode == 7'b0010011) && (
            funct3 == 3'b000 ||
            funct3 == 3'b010 ||
            funct3 == 3'b011 ||
            funct3 == 3'b100 ||
            funct3 == 3'b110 ||
            funct3 == 3'b111 ||
            (funct3 == 3'b001 && funct7 == 7'b0000000) ||
            (funct3 == 3'b101 && funct7 == 7'b0000000) ||
            (funct3 == 3'b101 && funct7 == 7'b0100000)

        );





         wire valid_r_type = (opcode == 7'b0110011) && (
        (funct3 == 3'b000 && funct7 == 7'b0000000) ||         // ADD
        (funct3 == 3'b000 && funct7 == 7'b0100000) ||         // SUB
        (funct3 == 3'b001 && funct7 == 7'b0000000) ||         // SLL
        (funct3 == 3'b010 && funct7 == 7'b0000000) ||         // SLT
        (funct3 == 3'b011 && funct7 == 7'b0000000) ||         // SLTU
        (funct3 == 3'b100 && funct7 == 7'b0000000) ||         // XOR
        (funct3 == 3'b101 && funct7 == 7'b0000000) ||         // SRL
        (funct3 == 3'b101 && funct7 == 7'b0100000) ||         // SRA
        (funct3 == 3'b110 && funct7 == 7'b0000000) ||         // OR
        (funct3 == 3'b111 && funct7 == 7'b0000000) ||         // AND
        // M 扩展
        (funct3 == 3'b000 && funct7 == 7'b0000001) ||         // MUL
        (funct3 == 3'b001 && funct7 == 7'b0000001) ||         // MULH
        (funct3 == 3'b100 && funct7 == 7'b0000001) ||         // DIV
        (funct3 == 3'b101 && funct7 == 7'b0000001) ||         // DIVU
        (funct3 == 3'b110 && funct7 == 7'b0000001) ||         // REM
        (funct3 == 3'b111 && funct7 == 7'b0000001)            // REMU
    );

    wire is_system_op = (opcode == 7'b1110011);
    wire [11:0] funct12  = inst[31:20];



	        wire valid_system = is_system_op && (

	        (funct3 == 3'b000 && funct12 == 12'h000) || // ECALL
	         (funct3 == 3'b000 && funct12 == 12'h001) ||
	        (funct3 == 3'b000 && funct12 == 12'h302) || // MRET
	        (funct3 == 3'b001) || // CSRRW
	        (funct3 == 3'b010)    // CSRRS
	    );            

        // 写回使能
        assign reg_write_en_idu = valid_lui    || valid_auipc || valid_jal  || valid_jalr ||
                                  valid_load  || valid_i_type || valid_r_type ||
                                  (valid_system && (funct3 == 3'b001 || funct3 == 3'b010));

	        assign csr_addr = valid_system ? inst[31:20] : 12'h0;

        // 类型标志
        assign is_load  = valid_load;
        assign is_store = valid_store;
        assign is_ecall = valid_system && (funct3 == 3'b000) && (funct12 == 12'h000);
        assign is_mret  = valid_system && (funct3 == 3'b000) && (funct12 == 12'h302);

        assign is_branch = valid_branch;
        assign is_jal    = valid_jal;
        assign is_jalr   = valid_jalr;
        assign branch_op = valid_branch ? funct3 : 3'b000;

        // CSR 操作
        wire valid_csrrw = valid_system && (funct3 == 3'b001);
        wire valid_csrrs = valid_system && (funct3 == 3'b010);

        always @(*) begin
            csr_op = CSR_OP_NONE;
            if (valid_csrrw) csr_op = CSR_OP_CSRRW;
            else if (valid_csrrs) csr_op = CSR_OP_CSRRS;
        end

        // 控制信号生成
        always @(*) begin
            alu_op     = ALU_ADD;
            alu_a_sel  = ALU_A_RS1;
            alu_b_sel  = ALU_B_IMM;
            result_sel = RES_ALU;

            if (valid_lui) begin
                alu_a_sel = ALU_A_ZERO;
            end else if (valid_auipc || valid_jal || valid_branch) begin
                alu_a_sel = ALU_A_PC;
            end else begin
                alu_a_sel = ALU_A_RS1;
            end

            if (valid_r_type) alu_b_sel = ALU_B_RS2;
            else alu_b_sel = ALU_B_IMM;

            if (valid_jal || valid_jalr) begin
                result_sel = RES_PC4;
            end else if (csr_op != CSR_OP_NONE) begin
                result_sel = RES_CSR;
            end else begin
                result_sel = RES_ALU;
            end

            if (valid_i_type) begin
                case (funct3)
                    3'b000: alu_op = ALU_ADD;
                    3'b010: alu_op = ALU_SLT;
                    3'b011: alu_op = ALU_SLTU;
                    3'b100: alu_op = ALU_XOR;
                    3'b110: alu_op = ALU_OR;
                    3'b111: alu_op = ALU_AND;
                    3'b001: alu_op = ALU_SLL;
                    3'b101: alu_op = (funct7 == 7'b0100000) ? ALU_SRA : ALU_SRL;
                    default: alu_op = ALU_ADD;
                endcase
            end else if (valid_r_type) begin
                if (funct7 == 7'b0000001) begin
                    case (funct3)
                        3'b000: alu_op = ALU_MUL;
                        3'b001: alu_op = ALU_MULH;
                        3'b100: alu_op = ALU_DIV;
                        3'b101: alu_op = ALU_DIVU;
                        3'b110: alu_op = ALU_REM;
                        3'b111: alu_op = ALU_REMU;
                        default: alu_op = ALU_ADD;
                    endcase
                end else begin
                    case (funct3)
                        3'b000: alu_op = (funct7 == 7'b0100000) ? ALU_SUB : ALU_ADD;
                        3'b001: alu_op = ALU_SLL;
                        3'b010: alu_op = ALU_SLT;
                        3'b011: alu_op = ALU_SLTU;
                        3'b100: alu_op = ALU_XOR;
                        3'b101: alu_op = (funct7 == 7'b0100000) ? ALU_SRA : ALU_SRL;
                        3'b110: alu_op = ALU_OR;
                        3'b111: alu_op = ALU_AND;
                        default: alu_op = ALU_ADD;
                    endcase
                end
            end else begin
                alu_op = ALU_ADD;
            end
        end

        always @(*) begin
        if (valid_lui || valid_auipc || valid_jal || valid_jalr ||
            valid_load || valid_store || valid_branch || 
            valid_i_type || valid_r_type || valid_system) begin
            inst_invalid = 1'b0;
        end else begin
            inst_invalid = 1'b1;
        end
    end

    

endmodule
