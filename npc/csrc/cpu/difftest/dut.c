#include<dlfcn.h>
#include<isa.h>
#include<cpu/cpu.h>
#include<memory/paddr.h>
#include<utils.h>
#include<difftest-def.h>

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;


#ifdef CONFIG_DIFFTEST

// nemu是逐条指令执行，目前不需要处理打包问题,但考虑到可能还要和其他模拟器进行比较，保留处理打包方式

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;

void difftest_skip_ref(){
    is_skip_ref = true;
    skip_dut_nr_inst = 0;
}


void difftest_skip_dut(int nr_ref,int nr_dut){
    skip_dut_nr_inst += nr_dut;

    while(nr_ref-- > 0){
        ref_difftest_exec(1);
    }
}

void init_difftest(char *ref_so_file,long img_size,int port){
    assert(ref_so_file != NULL);

    void *handle;
    handle = dlopen(ref_so_file, RTLD_LAZY);
    assert(handle);

    ref_difftest_memcpy = dlsym(handle, "difftest_memcpy");
    assert(ref_difftest_memcpy);

    ref_difftest_regcpy = dlsym(handle, "difftest_regcpy");
    assert(ref_difftest_regcpy);

    ref_difftest_exec = dlsym(handle, "difftest_exec");
    assert(ref_difftest_exec);

    ref_difftest_raise_intr = dlsym(handle, "difftest_raise_intr");
    assert(ref_difftest_raise_intr);

    void (*ref_difftest_init)(int) = dlsym(handle, "difftest_init");
    assert(ref_difftest_init);

    Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
    Log("The")
}
