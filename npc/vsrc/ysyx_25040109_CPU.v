module ysyx_25040109_CPU (
    input clk,
    input rst,
    input [31:0] p_count_number,  // 性能计数（用于trace）

    // 取指通道（连接到MEM）
    
    output imem_ren,
    input imem_rvalid,            // 指令数据有效（握手协议）
    output imem_ready,            // 指令通道 ready（握手）
    output [31:0] imem_addr,
    input [31:0] imem_rdata,

    // 访存通道（连接到MEM）
    output dmem_ren,
    input dmem_rvalid,            // 数据读有效（握手协议）
    output dmem_rready,           // 数据读 ready（握手）
    output [31:0] dmem_raddr,
    input [31:0] dmem_rdata,

    output dmem_wen,
    output dmem_wvalid,
    input dmem_wready,            // 数据写准备好（握手协议）
    output [31:0] dmem_waddr,
    output [31:0] dmem_wdata,
    output [2:0] dmem_wlen,
 

    // 调试和监控接口
    output [31:0] inst,
    output [31:0] pc,
    output [31:0] a0_out,

    // 差分测试接口
    output inst_wb_complete,        // 指令完成标记
    output is_load_out,             // Load指令标记
    output is_store_out,            // Store指令标记
    output is_ecall_out,            // ECALL指令标记
    output [6:0] opcode_out         // 指令操作码
);

    // ========================================
    // 常量定义区
    // ========================================
    localparam S_NORMAL      = 1'b0;        // trap状态：正常执行
    localparam S_TRAP_MCAUSE = 1'b1;   // trap状态：写MCAUSE
    localparam CSR_MEPC   = 12'h341;   // CSR地址：MEPC
    localparam CSR_MCAUSE = 12'h342;   // CSR地址：MCAUSE
    // 写回阶段可调延迟（验证长尾）：默认为0，不改变功能
    localparam [3:0] WB_LAT_ALU = 4'd0;
    localparam [3:0] WB_LAT_MEM = 4'd0;
    localparam [3:0] WB_LAT_CSR = 4'd0;

    // ========================================
    // IF阶段信号（取指阶段）
    // ========================================
    // PC与阶段控制
    reg  [31:0] pc_fetch = 32'h80000000;  // 下一条待取PC
    reg  [31:0] pc_exe   = 32'h80000000;  // 当前执行/提交PC
    reg         stage_valid    = 1'b0;    // EX/WB阶段 valid
    reg         id_valid       = 1'b0;    // IFU→IDU 弹性级 valid
    reg  [31:0] id_inst        = 32'b0;   // IFU→IDU 缓存指令
    reg  [31:0] id_pc          = 32'h80000000; // IFU→IDU 缓存PC
    reg         lsu_req_issued = 1'b0;    // 当前指令是否已向LSU发请求
    reg  [31:0] inst_exe       = 32'b0;   // 当前执行指令
    
    // 取指输出与握手
    wire [31:0] inst_ifu;                 // 取出的指令 | IFU → IDU, 控制, 调试
    wire        ifu_ready_to_mem;
    wire        ifu_valid_to_idu;
    wire        idu_ready;
    
    // 指令字段（从IDU获取）
    wire [6:0] opcode;                  // 操作码 | IDU → 控制逻辑
    wire [4:0] rs1_addr;                // 源寄存器1地址 | IDU → RegisterFile
    wire [4:0] rs2_addr;                // 源寄存器2地址 | IDU → RegisterFile

    // ========================================
    // ID阶段信号（译码阶段）
    // ========================================
    // 译码输出
    wire [31:0] imm;                    // 立即数（扩展后） | IDU → EXU
    wire [2:0] funct3;                  // 功能码3 | IDU → EXU, LSU, 控制
    wire [4:0] rd_addr_idu;             // 目的寄存器地址 | IDU → EXU
    wire reg_write_en_idu;              // 寄存器写使能 | IDU → EXU
    wire inst_invalid;                  // 指令无效标志 | IDU → EXU, LSU, 控制
    wire [11:0] csr_addr;               // CSR地址 | IDU → EXU, 控制

    // IDU生成的执行控制信号
    wire [4:0] alu_op;
    wire [1:0] alu_a_sel;
    wire       alu_b_sel;
    wire [1:0] result_sel;
    wire       is_branch;
    wire       is_jal;
    wire       is_jalr;
    wire [2:0] branch_op;
    wire [1:0] csr_op;
    wire       is_mret;

    // ========================================
    // EX阶段信号（执行阶段）
    // ========================================
    // 执行输出
    wire [31:0] result;                 // ALU计算结果 | EXU → LSU, 写回选择
    wire [31:0] next_pc;                // 计算的下一个PC | EXU → PC更新
    wire [4:0] rd_addr_exu;             // 目的寄存器地址（传递） | EXU → RegisterFile
    wire reg_write_en_exu;              // 寄存器写使能（传递） | EXU → 控制逻辑
    
    // CSR相关
    wire csr_we_from_exu;               // CSR写使能 | EXU → 控制逻辑
    wire [31:0] csr_wdata_from_exu;     // CSR写数据 | EXU → 控制逻辑

    // ========================================
    // MEM阶段信号（访存阶段）
    // ========================================
    // 访存控制
    wire is_load;                       // load指令标志 | 译码 → LSU, 控制
    wire is_store;                      // store指令标志 | 译码 → 控制
    wire final_mem_we;                  // 最终内存写使能 | 控制逻辑 → LSU

    // 访存数据
    wire [31:0] load_data_from_lsu;     // load数据（扩展后） | LSU → 写回选择
    wire store_enable_unused;           // store使能输出（未使用） | LSU → 悬空

    // 握手协议信号
    wire lsu_in_valid;                  // LSU输入valid信号
    wire lsu_out_ready;                 // LSU输出ready信号
    wire lsu_out_valid;                 // LSU输出valid信号
    wire lsu_in_ready;                  // LSU输入ready信号（来自WB）

    // ========================================
    // EXU/WB 握手信号（支持多周期 backpressure）
    // ========================================
    wire wb_ready;                       // 写回阶段 ready（握手）
    wire wb_valid;                       // 写回阶段 valid（握手）
    wire wb_fire;                        // 写回阶段 fire（握手）
    wire ex_ready;                       // EXU 接收准备
    wire idu_out_ready;                  // IDU ready to IFU/上游
    wire idu_out_valid;                  // IDU valid to EXU
    wire id_to_ex_fire;                  // IDU→EXU 传输
    wire id_fire;                        // IFU→IDU 传输
    reg  [3:0] wb_delay_cnt;             // 写回端模拟多周期 ready

    // ========================================
    // WB阶段信号（写回阶段）
    // ========================================
    wire [31:0] writeback_data;         // 写回数据选择 | 写回逻辑 → RegisterFile

    // ========================================
    // RegisterFile信号
    // ========================================
    // 通用寄存器读
    wire [31:0] rs1_data;               // 源寄存器1数据 | RegisterFile → EXU
    wire [31:0] rs2_data;               // 源寄存器2数据 | RegisterFile → EXU, LSU
    
    // CSR寄存器读
    wire [31:0] csr_rdata_from_regfile; // CSR读数据 | RegisterFile → EXU
    wire [31:0] mepc_from_regfile;      // MEPC寄存器值 | RegisterFile → EXU
    wire [31:0] mtvec_from_regfile;     // MTVEC寄存器值 | RegisterFile → EXU

    // ========================================
    // 控制逻辑信号
    // ========================================
    // Trap状态
    reg trap_state;                     // trap状态寄存器 | 内部状态
    wire is_stalled_by_trap;            // trap暂停标志 | trap_state → 全局控制
    wire is_ecall;                      // ecall指令标志 | 译码 → trap控制

    // 写回控制
    wire final_gpr_we;                  // 最终GPR写使能 | 控制逻辑 → RegisterFile

    // CSR控制
    wire final_csr_we;                  // 最终CSR写使能 | 控制逻辑 → RegisterFile
    wire [11:0] final_csr_waddr;        // 最终CSR写地址 | 控制逻辑 → RegisterFile
    wire [31:0] final_csr_wdata;        // 最终CSR写数据 | 控制逻辑 → RegisterFile

    // ========================================
    // 信号赋值区
    // ========================================
    // PC输出：执行中显示执行PC，否则显示取指PC
    assign pc = stage_valid ? pc_exe : pc_fetch;

    // Trap控制
    assign is_stalled_by_trap = (trap_state == S_TRAP_MCAUSE);

    // 取指接口连接：仅在流水线空闲（无IF/EX占用）时发起新取指，避免重复请求老PC
    wire   fetch_allow   = !stage_valid && !id_valid;
    assign imem_addr  = pc_fetch;
    assign imem_ren   = ifu_ready_to_mem && fetch_allow;
    assign imem_ready = ifu_ready_to_mem && fetch_allow;

    // 控制信号赋值
    assign final_gpr_we = reg_write_en_exu && stage_valid && commit_cond;
    assign final_mem_we = is_store && stage_valid;

    // CSR控制信号赋值
    assign final_csr_we = is_stalled_by_trap ||
                          (stage_valid && commit_cond &&
                           (is_ecall || csr_we_from_exu));

    assign final_csr_waddr = is_stalled_by_trap ? CSR_MCAUSE :
                             (stage_valid && is_ecall) ? CSR_MEPC :
                             csr_addr;

    assign final_csr_wdata = is_stalled_by_trap ? 32'd11 :
                             (stage_valid && is_ecall) ? pc_exe :
                             csr_wdata_from_exu;

    // 写回数据选择
    assign writeback_data = is_load ? load_data_from_lsu : result;

    // 指令完成条件
    wire mem_op      = idu_out_valid && (is_load || is_store);
    wire mem_done    = !mem_op || lsu_out_valid;
    wire [3:0] wb_delay_sel = mem_op ? WB_LAT_MEM :
                               (csr_we_from_exu ? WB_LAT_CSR : WB_LAT_ALU);
    assign wb_ready  = (wb_delay_cnt == 4'd0);
    assign wb_valid  = stage_valid && mem_done;
    assign wb_fire   = wb_valid && wb_ready;
    wire commit_cond = wb_fire;
    assign ex_ready  = !stage_valid || commit_cond;
    assign id_to_ex_fire = id_valid && ex_ready;
    assign id_fire = ifu_valid_to_idu && idu_ready;
    reg  inst_wb_complete_r;

    // 指令完成标记
    assign inst_wb_complete = inst_wb_complete_r;

    // 调试接口
    assign inst = inst_exe;

    // 差分测试接口输出
    assign is_load_out  = is_load && stage_valid;
    assign is_store_out = is_store && stage_valid;
    assign is_ecall_out = is_ecall && stage_valid;
    assign opcode_out   = opcode;

    // ========================================
    // 模块实例化区
    // ========================================
    // IFU实例（取指单元，握手版）
    ysyx_25040109_IFU ifu (
        .clk(clk),
        .rst(rst),
        .imem_rdata(imem_rdata),
        .mem_valid(imem_rvalid),
        .ifu_ready_to_mem(ifu_ready_to_mem),
        .idu_ready(idu_ready),
        .inst_ifu(inst_ifu),
        .ifu_valid_to_idu(ifu_valid_to_idu)
    );

    // IDU实例（译码单元）
    ysyx_25040109_IDU idu (
        .inst(inst_exe),
        .in_valid(stage_valid),
        .out_ready(idu_out_ready),
        .out_valid(idu_out_valid),
        .in_ready(ex_ready),
        .rd_addr(rd_addr_idu),
        .imm(imm),
        .reg_write_en_idu(reg_write_en_idu),
        .funct3(funct3),
        .inst_invalid(inst_invalid),
        .csr_addr(csr_addr),
        .opcode(opcode),
        .rs1_addr(rs1_addr),
        .rs2_addr(rs2_addr),
        .is_load(is_load),
        .is_store(is_store),
        .is_ecall(is_ecall),
        .alu_op(alu_op),
        .alu_a_sel(alu_a_sel),
        .alu_b_sel(alu_b_sel),
        .result_sel(result_sel),
        .is_branch(is_branch),
        .is_jal(is_jal),
        .is_jalr(is_jalr),
        .branch_op(branch_op),
        .csr_op(csr_op),
        .is_mret(is_mret)
    );

    // EXU实例（执行单元）
    ysyx_25040109_EXU exu (
        .rs1_data(rs1_data),
        .rs2_data(rs2_data),
        .imm(imm),
        .reg_write_in(reg_write_en_idu && stage_valid),
        .rd_addr(rd_addr_idu),
        .pc(pc_exe), 
        .rs1_addr(rs1_addr),
        .alu_op(alu_op),
        .alu_a_sel(alu_a_sel),
        .alu_b_sel(alu_b_sel),
        .result_sel(result_sel),
        .is_branch(is_branch),
        .is_jal(is_jal),
        .is_jalr(is_jalr),
        .branch_op(branch_op),
        .csr_op(csr_op),
        .is_ecall(is_ecall),
        .is_mret(is_mret),
        .inst_invalid(stage_valid ? inst_invalid : 1'b0),
        .result(result),
        .rd_addr_out(rd_addr_exu),
        .reg_write_en_out(reg_write_en_exu),
        .next_pc(next_pc),
        .csr_rdata(csr_rdata_from_regfile),
        .mepc(mepc_from_regfile),
        .mtvec(mtvec_from_regfile),
        .csr_we_out(csr_we_from_exu),
        .csr_wdata_out(csr_wdata_from_exu)
    );

    // LSU实例（访存单元）
    // 握手信号连接
    assign lsu_in_valid = mem_op && !lsu_req_issued;
    assign lsu_in_ready = wb_ready;     // 写回阶段 ready 参与握手
    wire lsu_in_fire = lsu_in_valid && lsu_out_ready;

    ysyx_25040109_LSU lsu (
        .clk(clk),
        .rst(rst),
        .addr(result),
        .store_data(rs2_data),
        .funct3(funct3),
        .is_load(is_load),
        .is_store(final_mem_we),
        .inst_invalid(inst_invalid),
        .in_valid(lsu_in_valid),
        .out_ready(lsu_out_ready),
        .dmem_ren(dmem_ren),
        .dmem_raddr(dmem_raddr),
        .dmem_rdata(dmem_rdata),
        .dmem_rvalid(dmem_rvalid),
        .dmem_rready(dmem_rready),
        .dmem_wen(dmem_wen),
        .dmem_wvalid(dmem_wvalid),
        .dmem_waddr(dmem_waddr),
        .dmem_wdata(dmem_wdata),
        .dmem_wlen(dmem_wlen),
        .dmem_wready(dmem_wready),
        .load_data(load_data_from_lsu),
        .store_enable(store_enable_unused),
        .out_valid(lsu_out_valid),
        .in_ready(lsu_in_ready)
    );

    // RegisterFile实例（寄存器文件）
    ysyx_25040109_RegisterFile #(5, 32) regfile (
        .clk(clk),
        .rst(rst),
        .pc(pc),
        .wdata(writeback_data),
        .waddr(rd_addr_exu),
        .wen(final_gpr_we),
        .raddr1(rs1_addr),
        .raddr2(rs2_addr),
        .rdata1(rs1_data),
        .rdata2(rs2_data),
        .a0_out(a0_out),
        .csr_we(final_csr_we),
        .csr_addr(final_csr_waddr),
        .csr_wdata(final_csr_wdata),
        .mepc_out(mepc_from_regfile),
        .mtvec_out(mtvec_from_regfile),
        .csr_rdata(csr_rdata_from_regfile)
    );

`ifndef SYNTHESIS
    // DPI-C监控函数
    import "DPI-C" function void difftest_skip_ref();
    import "DPI-C" function int printf_finish(input int inst);
    import "DPI-C" function void itrace_print(int pc, int instruction_word, int instr_len_bytes, int p_count_number);
    import "DPI-C" function void update_decode_state(int pc, int snpc, int dnpc, int inst);

    integer dbg_id_fire_cnt;
    integer dbg_commit_cnt;

    initial begin
        dbg_id_fire_cnt = 0;
        dbg_commit_cnt  = 0;
    end

    // 译码状态更新
    always @(*) begin
        if (stage_valid) begin
            update_decode_state(pc_exe, pc_exe + 32'd4, next_pc, inst_exe);
        end
    end
  

    // 指令trace和程序结束检测
    always @(posedge clk) begin
        if (!rst && inst_wb_complete_r) begin
            itrace_print(pc_exe, inst_exe, 4, p_count_number);
            
            if (printf_finish(inst_exe) == 0) begin
                $finish;
            end
        end

        if (!rst) begin
            if (id_fire && dbg_id_fire_cnt < 10) begin
                dbg_id_fire_cnt <= dbg_id_fire_cnt + 1;
                $display("[DBG id_fire%0d] pc_fetch=0x%08h inst_ifu=0x%08h id_valid=%b stage_valid=%b ifu_ready=%b mem_valid=%b imem_addr=0x%08h",
                         dbg_id_fire_cnt, pc_fetch, inst_ifu, id_valid, stage_valid, ifu_ready_to_mem, imem_rvalid, imem_addr);
            end
            if (commit_cond && dbg_commit_cnt < 10) begin
                dbg_commit_cnt <= dbg_commit_cnt + 1;
                $display("[DBG commit%0d] pc_exe=0x%08h inst=0x%08h rd=%0d wdata=0x%08h wen=%b pc_fetch=0x%08h next_pc=0x%08h",
                         dbg_commit_cnt, pc_exe, inst_exe, rd_addr_exu, writeback_data, final_gpr_we, pc_fetch, next_pc);
            end
        end else begin
            dbg_id_fire_cnt <= 0;
            dbg_commit_cnt  <= 0;
        end
    end
`endif

    // ========================================
    // 阶段与PC更新时序
    // ========================================
    assign idu_ready = idu_out_ready && !id_valid;
    always @(posedge clk) begin
        if (rst) begin
            stage_valid    <= 1'b0;
            id_valid       <= 1'b0;
            wb_delay_cnt   <= 4'd0;
            pc_fetch       <= 32'h80000000;
            pc_exe         <= 32'h80000000;
            inst_exe       <= 32'b0;
            id_inst        <= 32'b0;
            id_pc          <= 32'h80000000;
            lsu_req_issued <= 1'b0;
            trap_state     <= S_NORMAL;
            inst_wb_complete_r <= 1'b0;
        end else begin
            // Trap状态机（只看当前指令）
            case (trap_state)
                S_NORMAL: begin
                    if (stage_valid && is_ecall) begin
                        trap_state <= S_TRAP_MCAUSE;
                    end
                end
                S_TRAP_MCAUSE: begin
                    trap_state <= S_NORMAL;
                end
                default: trap_state <= S_NORMAL;
            endcase

            // IFU→IDU 弹性级
            if (id_fire) begin
                id_inst <= inst_ifu;
                id_pc   <= pc_fetch;
            end
            case ({id_fire, id_to_ex_fire})
                2'b10: id_valid <= 1'b1;  // 仅流入
                2'b01: id_valid <= 1'b0;  // 仅流出
                2'b11: id_valid <= 1'b1;  // 同时流入流出，保持占用
                default: id_valid <= id_valid;
            endcase

            // 接收新指令
            if (id_to_ex_fire) begin
                inst_exe       <= id_inst;
                pc_exe         <= id_pc;
                stage_valid    <= 1'b1;
                lsu_req_issued <= 1'b0;
            end else if (commit_cond) begin
                stage_valid <= 1'b0;
                lsu_req_issued <= 1'b0;
            end

            // 访存请求只发一次
            if (lsu_in_fire) begin
                lsu_req_issued <= 1'b1;
            end

            // PC在提交后更新
            if (commit_cond) begin
                pc_fetch <= next_pc;
            end

            // 写回延迟计数：模拟多周期 sink
            if (commit_cond) begin
                wb_delay_cnt <= wb_delay_sel;
            end else if (wb_delay_cnt != 4'd0) begin
                wb_delay_cnt <= wb_delay_cnt - 1'b1;
            end

            // 提交信号打一拍，方便外部握手
            inst_wb_complete_r <= (!rst) && commit_cond;

        end
    end

endmodule
