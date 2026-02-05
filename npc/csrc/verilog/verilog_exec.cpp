#include<verilog_init.h>
#include<verilog.h>
#include<cpu/cpu.h>
#include<cpu/decode.h>
#include<cpu/difftest.h>
#include<reg.h>
#include<memory/paddr.h>


void device_update();

CPU_state cpu = {};
Decode lastest_decode = {
    .pc   = cpu.pc,
    .snpc = cpu.pc + 4,
    .logbuf = {},
};



#define MAX_INST_TO_PRINT 100

// 记录上一拍的访存类型与地址，用于对齐 inst_wb_complete
static bool prev_is_load = false;
static bool prev_is_store = false;
static paddr_t prev_dmem_raddr = 0;
static paddr_t prev_dmem_waddr = 0;

static void latch_mem_access_info() {

#ifdef SOC_TOP

      prev_is_load = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cpu__DOT__is_load;
    prev_is_store = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cpu__DOT__is_store;
    prev_dmem_raddr = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_araddr ;
    prev_dmem_waddr = top->rootp->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr;
#else 
  //  prev_is_load = top->is_load_out;
  //  prev_is_store = top->is_store_out;
  //  prev_dmem_raddr = top->dmem_raddr_out;
 //   prev_dmem_waddr = top->dmem_waddr_out;
#endif

}

// 只在访问 MMIO 时跳过差分测试（使用上一拍的访存信息对齐提交）
static bool should_skip_difftest() {
    if (prev_is_load) {
        return !in_pmem(prev_dmem_raddr);
    }
    if (prev_is_store) {
        return !in_pmem(prev_dmem_waddr);
    }
    return false;
}

static void trace_and_difftest(Decode *_this,vaddr_t dnpc)
{
  // 只在指令完成时进行差分测试 top->inst_wb_complete;
  #ifdef SOC_TOP

int temp_inst_wb_complete = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cpu__DOT__inst_wb_complete_r;
#else
  int temp_inst_wb_complete = top->inst_wb_complete;

  #endif
    if (temp_inst_wb_complete) {
        #ifdef CONFIG_DIFFTEST
        if (should_skip_difftest()) {
            // 需要跳过：将 DUT 状态同步到 REF
            difftest_skip_ref();
        } else {
            // 正常差分测试

            difftest_step(_this->pc, dnpc);
        }
        #endif
    }

#ifdef CONFIG_WATCHPOINT
    extern int monitor_point(uint32_t cpu_pc);

    if (monitor_point(cpu.pc))
    {
        npc_state.state = NPC_STOP;
    }

#endif
}

uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0;
static bool g_print_step = false;
 
static void exec_once(){

    
    top->clock = 0;
    top->eval();
    tfp->dump(sim_time++);
    top->clock = 1;
    top->eval();
    tfp->dump(sim_time++);
}

static void execute(uint64_t n)
{
    for (; n > 0;n--){
        if (Verilated::gotFinish())
        {
            npc_state.state = NPC_END;
            return;
        }

     //   clint_update_mtime();
        exec_once();
        g_nr_guest_inst++;
       // trace_and_difftest(&lastest_decode ,cpu.pc);
        latch_mem_access_info();

        if(npc_state.state != NPC_RUNNING)
        break;

         IFDEF(CONFIG_DEVICE, device_update());
    }
}

void cpu_exec(uint64_t n){
    
    g_print_step = (n < MAX_INST_TO_PRINT);
    switch (npc_state.state){
    case NPC_END:
    case NPC_ABORT:
    case NPC_QUIT:
        std::cout << " Program execution has ended.To restart the program, exit NEMU and run again."<<std::endl;
        return;
    default:
        npc_state.state = NPC_RUNNING;
    }

   #ifdef SOC_TOP

#else 
 //   top->p_count_number = n > 1000000 ? MAX_INST_TO_PRINT + 1 : n;
    #endif
    execute(n);


}
 
