module ysyx_25040109_CPU (
    input clk,
    input rst,
    input [31:0] p_count_number,  // trace 计数

    // 取指通道
    output        imem_arvalid,
    input         imem_arready,
    input         imem_rvalid,
    output        imem_rready,
    output [31:0] imem_araddr,
    input  [31:0] imem_rdata,
    input  [1:0]  imem_rresp,
        
    output [31:0] imem_awaddr,
    output        imem_awvalid,
    input         imem_awready,
    output [31:0] imem_wdata,
    output [3:0]  imem_wstr,
    input         imem_wready,
    output        imem_wvalid,
    output        imem_bready,
    input         imem_bvalid,
    input [1:0]   imem_bresp,
    // 访存通道
    output        dmem_arvalid,
    input         dmem_arready,
    output [31:0] dmem_araddr,

    input         dmem_rvalid,
    output        dmem_rready,
    input  [31:0] dmem_rdata,
    input [1:0]   dmem_rresp,

    output        dmem_awvalid,
    input         dmem_awready,
    output [31:0] dmem_awaddr,

    output        dmem_wvalid,
    input         dmem_wready,
    output [31:0] dmem_wdata,
    output [3:0]  dmem_wstrb,


    input [1:0]  dmem_bresp,
    input        dmem_bvalid,
    output       dmem_bready,

    // 调试
    output [31:0] inst,
    output [31:0] pc,
    output [31:0] a0_out,

    // difftest
    output inst_wb_complete,
    output is_load_out,
    output is_store_out,
    output is_ecall_out,
    output [6:0] opcode_out
);

    // 常量
    localparam S_NORMAL      = 1'b0;
    localparam S_TRAP_MCAUSE = 1'b1;
    localparam CSR_MEPC      = 12'h341;
    localparam CSR_MCAUSE    = 12'h342;
    // 写回延迟（默认 0）
    localparam [3:0] WB_LAT_ALU = 4'd0;
    localparam [3:0] WB_LAT_MEM = 4'd0;
    localparam [3:0] WB_LAT_CSR = 4'd0;

    localparam [1:0] RESP_OKAY = 2'b00;

    // 时序状态寄存器
    reg  [31:0] pc_fetch = 32'h80000000;
    reg  [31:0] pc_exe   = 32'h80000000;
    reg         stage_valid    = 1'b0;
    reg         id_valid       = 1'b0;
    reg  [31:0] id_inst        = 32'b0;
    reg  [31:0] id_pc          = 32'h80000000;
    reg         lsu_req_issued = 1'b0;
    reg         imem_req_pending = 1'b0;
    reg  [31:0] inst_exe       = 32'b0;
    reg  [3:0]  wb_delay_cnt;
    reg         trap_state;
    reg  [31:0] trap_mepc;
    reg  [31:0] trap_cause;
    reg         inst_wb_complete_r;

    // 取指输出与握手
    wire [31:0] inst_ifu;
    wire        ifu_ready_to_mem;
    wire        ifu_valid_to_idu;
    wire        idu_ready;
    wire        fetch_allow;
    wire        imem_ar_fire;
    wire        imem_r_fire;

    // IDU/译码输出
    wire [6:0]  opcode;
    wire [4:0]  rs1_addr;
    wire [4:0]  rs2_addr;
    wire [31:0] imm;
    wire [2:0]  funct3;
    wire [4:0]  rd_addr_idu;
    wire        reg_write_en_idu;
    wire        inst_invalid;
    wire [11:0] csr_addr;

    // IDU 控制信号
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

    // EXU 输出
    wire [31:0] result;
    wire [31:0] next_pc;
    wire [4:0]  rd_addr_exu;
    wire        reg_write_en_exu;

    // CSR
    wire        csr_we_from_exu;
    wire [31:0] csr_wdata_from_exu;

    // 访存/LSU
    wire        is_load;
    wire        is_store;
    wire        final_mem_we;
    wire [31:0] load_data_from_lsu;
    wire        store_enable_unused;
    wire        lsu_in_valid;
    wire        lsu_out_ready;
    wire        lsu_out_valid;
    wire        lsu_in_ready;
    wire        lsu_in_fire;
    wire        lsu_out_fire;
    wire        lsu_resp_err;

    // EX/WB 握手
    wire        wb_ready;
    wire        wb_valid;
    wire        wb_fire;
    wire        ex_ready;
    wire        idu_out_ready;
    wire        idu_out_valid;
    wire        id_to_ex_fire;
    wire        id_fire;

    // 写回
    wire [31:0] writeback_data;
    wire        mem_op;
    wire        mem_done;
    wire [3:0]  wb_delay_sel;

    // 寄存器与 CSR 读口
    wire [31:0] rs1_data;
    wire [31:0] rs2_data;
    wire [31:0] csr_rdata_from_regfile;
    wire [31:0] mepc_from_regfile;
    wire [31:0] mtvec_from_regfile;

    // trap / 控制
    wire        is_stalled_by_trap;
    wire        is_ecall;
    wire        final_gpr_we;
    wire        final_csr_we;
    wire [11:0] final_csr_waddr;
    wire [31:0] final_csr_wdata;
    wire        exc_imem;
    wire        exc_load;
    wire        exc_store;
    wire        exc_any;
    wire        commit_cond;

    // 信号连线
    // PC 输出：执行中显示执行 PC，否则显示取指 PC
    assign pc = stage_valid ? pc_exe : pc_fetch;

    // Trap 控制
    assign is_stalled_by_trap = (trap_state == S_TRAP_MCAUSE);

    // 仅在流水线空闲且无未完成请求时发起取指
    assign fetch_allow = !stage_valid && !id_valid && !imem_req_pending;
    assign imem_araddr  = pc_fetch;
    assign imem_arvalid = fetch_allow;
    assign imem_rready  = ifu_ready_to_mem;
    assign imem_ar_fire = imem_arvalid && imem_arready;
    assign imem_r_fire  = imem_rvalid && imem_rready;
    assign idu_ready    = idu_out_ready && !id_valid;

    assign final_gpr_we = reg_write_en_exu && stage_valid && commit_cond;
    assign final_mem_we = is_store && stage_valid;

    assign writeback_data = is_load ? load_data_from_lsu : result;

    assign mem_op       = idu_out_valid && (is_load || is_store);
    assign mem_done     = !mem_op || lsu_out_valid;
    assign wb_delay_sel = mem_op ? WB_LAT_MEM :
                          (csr_we_from_exu ? WB_LAT_CSR : WB_LAT_ALU);

    assign wb_ready     = (wb_delay_cnt == 4'd0);
    assign wb_valid     = stage_valid && mem_done;
    assign wb_fire      = wb_valid && wb_ready;

    assign lsu_in_valid = mem_op && !lsu_req_issued && !exc_any;
    assign lsu_in_ready = wb_ready;
    assign lsu_in_fire  = lsu_in_valid && lsu_out_ready;
    assign lsu_out_fire = lsu_out_valid && lsu_in_ready;

    assign exc_imem  = imem_rvalid && imem_req_pending && (imem_rresp != RESP_OKAY);
    assign exc_load  = lsu_out_fire && is_load && lsu_resp_err;
    assign exc_store = lsu_out_fire && is_store && lsu_resp_err;
    assign exc_any   = exc_imem || exc_load || exc_store;

    assign commit_cond  = wb_fire && !exc_any;
    assign ex_ready     = !stage_valid || commit_cond;
    assign id_to_ex_fire = id_valid && ex_ready;
    assign id_fire      = ifu_valid_to_idu && idu_ready && !exc_any;

    assign inst = inst_exe;
    assign is_load_out  = is_load && stage_valid;
    assign is_store_out = is_store && stage_valid;
    assign is_ecall_out = is_ecall && stage_valid;
    assign opcode_out   = opcode;
    assign inst_wb_complete = inst_wb_complete_r;

    assign final_csr_we = is_stalled_by_trap || exc_any ||
                            (stage_valid && commit_cond &&
                            (is_ecall || csr_we_from_exu));

    assign final_csr_waddr = is_stalled_by_trap ? CSR_MCAUSE :
                            exc_any ? CSR_MEPC : (stage_valid && is_ecall) ? 
                            CSR_MEPC : csr_addr;

    assign final_csr_wdata = is_stalled_by_trap ? trap_cause : exc_any ? trap_mepc :
                            (stage_valid && is_ecall) ? pc_exe :
                            csr_wdata_from_exu;

    // 模块实例
    // IFU
    ysyx_25040109_IFU ifu (
        .clk(clk),
        .rst(rst),
        .imem_rdata(imem_rdata),
        .mem_valid(imem_rvalid),
        .ifu_ready_to_mem(ifu_ready_to_mem),
        .idu_ready(idu_ready),
        .inst_ifu(inst_ifu),
        .ifu_valid_to_idu(ifu_valid_to_idu),
                
        .imem_awaddr(imem_awaddr),
        .imem_awvalid(imem_awvalid),
        .imem_awready(imem_awready),
        .imem_wdata(imem_wdata),
        .imem_wvalid(imem_wvalid),
        .imem_wready(imem_wready),
        .imem_bresp(imem_bresp),
        .imem_bvalid(imem_bvalid),
        .imem_bready(imem_bready),
        .imem_wstr(imem_wstr)
    );

    // IDU
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

    // EXU
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

    // LSU
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
        .dmem_arvalid(dmem_arvalid),
        .dmem_arready(dmem_arready),
        .dmem_araddr(dmem_araddr),
        .dmem_rdata(dmem_rdata),
        .dmem_rvalid(dmem_rvalid),
        .dmem_rready(dmem_rready),
        .dmem_awvalid(dmem_awvalid),
        .dmem_awready(dmem_awready),
        .dmem_awaddr(dmem_awaddr),
        .dmem_wvalid(dmem_wvalid),
        .dmem_wdata(dmem_wdata),
        .dmem_wstrb(dmem_wstrb),
        .dmem_wready(dmem_wready),
        .load_data(load_data_from_lsu),
        .store_enable(store_enable_unused),
        .out_valid(lsu_out_valid),
        .in_ready(lsu_in_ready),
        .dmem_bready(dmem_bready),
        .dmem_bresp(dmem_bresp),
        .dmem_bvalid(dmem_bvalid),
        .dmem_rresp(dmem_rresp),
        .resp_err(lsu_resp_err)
    );

    // RegisterFile
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
    // DPI-C
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

    always @(*) begin
        if (stage_valid) begin
            update_decode_state(pc_exe, pc_exe + 32'd4, next_pc, inst_exe);
        end
    end
  


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
                //$display("[DBG id_fire%0d] pc_fetch=0x%08h inst_ifu=0x%08h id_valid=%b stage_valid=%b ifu_ready=%b mem_valid=%b imem_addr=0x%08h",
                  //       dbg_id_fire_cnt, pc_fetch, inst_ifu, id_valid, stage_valid, ifu_ready_to_mem, imem_rvalid, imem_araddr);
            end
            if (commit_cond && dbg_commit_cnt < 10) begin
                dbg_commit_cnt <= dbg_commit_cnt + 1;
                //$display("[DBG commit%0d] pc_exe=0x%08h inst=0x%08h rd=%0d wdata=0x%08h wen=%b pc_fetch=0x%08h next_pc=0x%08h",
                  //       dbg_commit_cnt, pc_exe, inst_exe, rd_addr_exu, writeback_data, final_gpr_we, pc_fetch, next_pc);
            end
        end else begin
            dbg_id_fire_cnt <= 0;
            dbg_commit_cnt  <= 0;
        end
    end
`endif

    // 时序
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
            imem_req_pending <= 1'b0;
            trap_state     <= S_NORMAL;
            trap_mepc      <= 32'b0;
            trap_cause     <= 32'b0;
            inst_wb_complete_r <= 1'b0;
        end else begin
            if(exc_any)begin
                stage_valid <= 1'b0;
                id_valid    <= 1'b0;
                lsu_req_issued <= 1'b0;
                imem_req_pending <= 1'b0;
                wb_delay_cnt <=  4'd0;
                pc_fetch    <= mtvec_from_regfile;
                trap_mepc   <= exc_imem ? pc_fetch : pc_exe;
                trap_cause  <= exc_imem ? 32'd1 : exc_load ? 32'd5 : 32'd7;
                trap_state  <= S_TRAP_MCAUSE;
            end else begin
            // Trap 状态机
            case (trap_state)
                S_NORMAL: begin
                    if (stage_valid && is_ecall) begin
                        trap_mepc  <= pc_exe;
                        trap_cause <= 32'd11;
                        trap_state <= S_TRAP_MCAUSE;
                    end
                end
                S_TRAP_MCAUSE: begin
                    trap_state <= S_NORMAL;
                end
                default: trap_state <= S_NORMAL;
            endcase

            // IFU -> IDU 弹性级
            if (id_fire) begin
                id_inst <= inst_ifu;
                id_pc   <= pc_fetch;
            end
            case ({id_fire, id_to_ex_fire})
                2'b10: id_valid <= 1'b1;
                2'b01: id_valid <= 1'b0;
                2'b11: id_valid <= 1'b1;
                default: id_valid <= id_valid;
            endcase

            if (id_to_ex_fire) begin
                inst_exe       <= id_inst;
                pc_exe         <= id_pc;
                stage_valid    <= 1'b1;
                lsu_req_issued <= 1'b0;
            end else if (commit_cond) begin
                stage_valid <= 1'b0;
                lsu_req_issued <= 1'b0;
            end

            if (lsu_in_fire) begin
                lsu_req_issued <= 1'b1;
            end

            if (commit_cond) begin
                pc_fetch <= next_pc;
            end

            // 指令读地址/数据握手跟踪
            if (imem_ar_fire) begin
                imem_req_pending <= 1'b1;
            end
            if (imem_r_fire) begin
                imem_req_pending <= 1'b0;
            end

            // 写回延迟计数
            if (commit_cond) begin
                wb_delay_cnt <= wb_delay_sel;
            end else if (wb_delay_cnt != 4'd0) begin
                wb_delay_cnt <= wb_delay_cnt - 1'b1;
            end

            inst_wb_complete_r <= (!rst) && commit_cond;
        end
        end
    end
endmodule
