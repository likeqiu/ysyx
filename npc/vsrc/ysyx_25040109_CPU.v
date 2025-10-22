module ysyx_25040109_CPU (
    input clk,
    input rst,
    input [31:0] p_count_number,  // 性能计数（用于trace）

    // 取指通道（连接到MEM）
    output [31:0] imem_addr,
    output imem_ren,
    input [31:0] imem_rdata,
    /* verilator lint_off UNUSEDSIGNAL */
    input imem_rvalid,            // 指令数据有效（握手协议）
    /* verilator lint_on UNUSEDSIGNAL */

    // 访存通道（连接到MEM）
    output [31:0] dmem_raddr,
    output dmem_ren,
    input [31:0] dmem_rdata,
    input dmem_rvalid,            // 数据读有效（握手协议）
    output [31:0] dmem_waddr,
    output [31:0] dmem_wdata,
    output [2:0] dmem_wlen,
    output dmem_wen,
    input dmem_wready,            // 数据写准备好（握手协议）

    // 调试和监控接口
    output [31:0] inst,
    output [31:0] pc,
    output [31:0] a0_out
);

    // ========================================
    // 常量定义区
    // ========================================
    localparam S_NORMAL = 1'b0;        // trap状态：正常执行
    localparam S_TRAP_MCAUSE = 1'b1;   // trap状态：写MCAUSE
    localparam CSR_MEPC   = 12'h341;   // CSR地址：MEPC
    localparam CSR_MCAUSE = 12'h342;   // CSR地址：MCAUSE

    // ========================================
    // IF阶段信号（取指阶段）
    // ========================================
    // PC寄存器和控制
    reg [31:0] pc_reg = 32'h80000000;  // PC寄存器（初始值0x80000000） | 内部状态
    wire pc_wen;                        // PC写使能 | trap控制 → pc_reg
    
    // 取指输出
    wire [31:0] inst_ifu;               // 取出的指令 | IFU → IDU, 控制, 调试
    
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
    wire [6:0] funct7;                  // 功能码7 | IDU → EXU
    wire [4:0] rd_addr_idu;             // 目的寄存器地址 | IDU → EXU
    wire reg_write_en_idu;              // 寄存器写使能 | IDU → EXU
    wire inst_invalid;                  // 指令无效标志 | IDU → EXU, LSU, 控制
    wire [11:0] csr_addr;               // CSR地址 | IDU → EXU, 控制

    // ========================================
    // EX阶段信号（执行阶段）
    // ========================================
    // 执行输出
    wire [31:0] result;                 // ALU计算结果 | EXU → LSU, 写回选择
    wire [31:0] next_pc;                // 计算的下一个PC | EXU → pc_reg
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
    /* verilator lint_off UNUSEDSIGNAL */
    wire lsu_out_ready;                 // LSU输出ready信号
    wire lsu_out_valid;                 // LSU输出valid信号
    /* verilator lint_on UNUSEDSIGNAL */
    wire lsu_in_ready;                  // LSU输入ready信号（来自WB）

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

    // 内存等待控制
    wire is_stalled_by_mem;             // 内存等待暂停标志 | 内存握手 → 全局控制
    wire cpu_stall;                     // CPU总暂停信号 | 组合所有暂停条件

    // 写回控制
    wire final_gpr_we;                  // 最终GPR写使能 | 控制逻辑 → RegisterFile

    // CSR控制
    wire final_csr_we;                  // 最终CSR写使能 | 控制逻辑 → RegisterFile
    wire [11:0] final_csr_waddr;        // 最终CSR写地址 | 控制逻辑 → RegisterFile
    wire [31:0] final_csr_wdata;        // 最终CSR写数据 | 控制逻辑 → RegisterFile

    // 指令完成标记
    /* verilator lint_off UNUSEDSIGNAL */
    wire inst_wb_complete;              // 指令写回完成标记 | 写回完成 → 监控/调试
    /* verilator lint_on UNUSEDSIGNAL */

    // ========================================
    // 信号赋值区
    // ========================================
    // PC控制
    assign pc = pc_reg;
    assign pc_wen = !cpu_stall;

    // Trap控制
    assign is_stalled_by_trap = (trap_state == S_TRAP_MCAUSE);

    // 内存等待控制
    // 当取指或访存未完成时，暂停CPU
    reg imem_wait;
    reg dmem_wait;

    always @(posedge clk) begin
        if (rst) begin
            imem_wait <= 1'b0;
            dmem_wait <= 1'b0;
        end else begin
            // 取指等待：发出请求但数据未有效
            if (imem_ren && !imem_rvalid) begin
                imem_wait <= 1'b1;
            end else if (imem_rvalid) begin
                imem_wait <= 1'b0;
            end

            // 访存等待：发出请求但数据未有效
            if ((dmem_ren && !dmem_rvalid) || (dmem_wen && !dmem_wready)) begin
                dmem_wait <= 1'b1;
            end else if (dmem_rvalid || dmem_wready) begin
                dmem_wait <= 1'b0;
            end
        end
    end

    assign is_stalled_by_mem = imem_wait || dmem_wait;
    assign cpu_stall = is_stalled_by_trap || is_stalled_by_mem;

    always @(posedge clk) begin
        if (rst) begin
            trap_state <= S_NORMAL;
        end else begin
            case (trap_state)
                S_NORMAL: begin
                    if (is_ecall) begin
                        trap_state <= S_TRAP_MCAUSE;
                    end
                end
                S_TRAP_MCAUSE: begin
                    trap_state <= S_NORMAL;
                end
                default: trap_state <= S_NORMAL;
            endcase
        end
    end

    // 取指接口连接
    assign imem_addr = pc;
    assign imem_ren = 1'b1;

    // 控制信号赋值
    assign final_gpr_we = reg_write_en_exu && !cpu_stall;
    assign final_mem_we = is_store && !inst_invalid && !cpu_stall;

    // CSR控制信号赋值
    assign final_csr_we = (is_stalled_by_trap) ? 1'b1 :
                          (is_ecall)           ? 1'b1 :
                          csr_we_from_exu;

    assign final_csr_waddr = (is_stalled_by_trap) ? CSR_MCAUSE :
                             (is_ecall)           ? CSR_MEPC   :
                             csr_addr;

    assign final_csr_wdata = (is_stalled_by_trap) ? 32'd11 :
                             (is_ecall)           ? pc     :
                             csr_wdata_from_exu;

    // 写回数据选择
    assign writeback_data = is_load ? load_data_from_lsu : result;

    // 指令完成标记：覆盖所有指令类型的完成条件
    assign inst_wb_complete = !rst && (
        final_gpr_we ||                              // GPR写回完成（ALU、Load、JAL等）
        final_csr_we ||                              // CSR写回完成（CSR指令、ECALL、MRET）
        (final_mem_we && dmem_wready) ||             // Store指令完成（内存写确认）
        (opcode == 7'b1100011 && !inst_invalid && !cpu_stall)  // Branch指令完成
    );

    // 调试接口
    assign inst = inst_ifu;

    // ========================================
    // 时序逻辑区
    // ========================================
    // PC寄存器更新
    always @(posedge clk) begin
        if (rst) 
            pc_reg <= 32'h80000000;
        else if (pc_wen) 
            pc_reg <= next_pc;
    end

    // ========================================
    // 模块实例化区
    // ========================================
    // IFU实例（取指单元）
    ysyx_25040109_IFU ifu (
        .pc(pc),
        .imem_rdata(imem_rdata),
        .inst_ifu(inst_ifu)
    );

    // IDU实例（译码单元）
    ysyx_25040109_IDU idu (
        .inst(inst_ifu),
        .rd_addr(rd_addr_idu),
        .imm(imm),
        .reg_write_en_idu(reg_write_en_idu),
        .funct3(funct3),
        .funct7(funct7),
        .inst_invalid(inst_invalid),
        .csr_addr(csr_addr),
        
        // 新增输出：指令字段
        .opcode(opcode),
        .rs1_addr(rs1_addr),
        .rs2_addr(rs2_addr),
        
        // 新增输出：指令类型标志
        .is_load(is_load),
        .is_store(is_store),
        .is_ecall(is_ecall)
    );

    // EXU实例（执行单元）
    ysyx_25040109_EXU exu (
        .rs1_data(rs1_data),
        .rs2_data(rs2_data),
        .imm(imm),
        .reg_write_in(reg_write_en_idu),
        .rd_addr(rd_addr_idu),
        .pc(pc), 
        .rs1_addr(rs1_addr),
        .opcode(opcode), 
        .funct3(funct3),
        .funct7(funct7),
        .inst_invalid(inst_invalid),
        .result(result),
        .rd_addr_out(rd_addr_exu),
        .reg_write_en_out(reg_write_en_exu),
        .next_pc(next_pc),
        .csr_addr(csr_addr),
        .csr_rdata(csr_rdata_from_regfile),
        .mepc(mepc_from_regfile),
        .mtvec(mtvec_from_regfile),
        .csr_we_out(csr_we_from_exu),
        .csr_wdata_out(csr_wdata_from_exu)
    );

    // LSU实例（访存单元）
    // 握手信号连接
    assign lsu_in_valid = 1'b1;         // 简化实现：总是valid
    assign lsu_in_ready = 1'b1;         // 简化实现：WB总是ready

    ysyx_25040109_LSU lsu (
        .clk(clk),
        .rst(rst),
        .addr(result),
        .store_data(rs2_data),
        .funct3(funct3),
        .is_load(is_load),
        .is_store(final_mem_we),
        .inst_invalid(inst_invalid),
        .stall(cpu_stall),
        .in_valid(lsu_in_valid),
        .out_ready(lsu_out_ready),
        .dmem_ren(dmem_ren),
        .dmem_raddr(dmem_raddr),
        .dmem_rdata(dmem_rdata),
        .dmem_rvalid(dmem_rvalid),
        .dmem_wen(dmem_wen),
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
    
    // 译码状态更新
    always @(*) begin
        update_decode_state(pc, pc + 32'd4, next_pc, inst_ifu);
    end

    // difftest控制
    always @(posedge clk) begin
        if (final_mem_we || is_load || is_ecall || is_stalled_by_trap || opcode == 7'b1110011) begin
            difftest_skip_ref();
        end
    end

    // 指令trace和程序结束检测
    always @(posedge clk) begin
        if (!rst) begin
            itrace_print(pc, inst_ifu, 4, p_count_number);
            
            if (printf_finish(inst_ifu) == 0) begin
                $finish;
            end
        end
    end
`endif

endmodule
