module ysyx_25040109_IDU (
    input [31:0] inst,
    output [4:0] rd_addr,
    output [31:0] imm,
    output reg_write_en,
    input [31:0] rs1_data,
    output [31:0] rs1_data_out
);
    wire [6:0] opcode = inst[6:0];
    wire [2:0] funct3 = inst[14:12];
    wire [4:0] rs1 = inst[19:15];
    wire [4:0] rd = inst[11:7];
    wire [11:0] imm_i = inst[31:20];
    wire [19:0] imm_u=inst[31:12];
    wire [20:1] imm_j={inst[31],inst[19:12],inst[20],inst[30:21]};
    wire [11:0] imm_s={inst[31:25],inst[11:7]};
    wire [12:1] imm_b ={inst[31],inst[7],inst[30:25],inst[11:8]};

    wire [31:0] imm_i_ext={{20{imm_i[11]}},imm_i};
    wire [31:0] imm_u_ext={imm_u,12'b0};
    wire [31:0] imm_j_ext = {{11{imm_j[20]}},imm_j,1'b0};
    wire [31:0] imm_s_ext = {{20{imm_s[20]}},imm_s};
    wire [31:0] imm_b_ext = {{19{imm_b[12]}},imm_b,1'b0};


    ysyx_25040109_MuxKeyWithDefault #(8, 7,  32)  imm_select 
    ( imm,opcode,imm_inv_ext,
        {
            7'b0010111,imm_u_ext,
            7'b0110111,imm_u_ext,
            7'b0010011,imm_i_ext,
            7'b0110011,imm_r_ext,
            7'b0100011,imm_s_ext,
            7'b1101111,imm_j_ext,
            7'b1100011,imm_b_ext,
            7'b1110011,imm_ebreak_ext
        }
    ); 
    
    assign imm = (opcode==7'b0010111 || opcode==7'b0110111) ? imm_u_ext : (opcode==7'b1101111)  ?  imm_j_ext : imm_i_ext;
    assign rd_addr = rd;

    assign reg_write_en = 
    (opcode == 7'b0010011 && funct3 == 3'b000) ||  // addi
    (opcode == 7'b0010111) || // auipc
    (opcode == 7'b0110111) || // lui
    (opcode == 7'b1101111) || // jal
    (opcode == 7'b1100111 && funct3==3'b000); // jalr
    assign rs1_data_out = rs1_data;
    /* verilator lint_off UNUSEDSIGNAL */
    wire [4:0] rs1; // 保留 rs1
    /* verilator lint_on UNUSEDSIGNAL */
endmodule


