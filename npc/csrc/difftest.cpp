#include<dlfcn.h>
#include"ram.h"
//#include<utils.h>

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_dittest_raise_intr)(uint64_t NO) = NULL;

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;

void difftest_skip_ref(){
    is_skip_ref = true;
    skip_dut_nr_inst = 0;
}

void difftest_skip_dut(int nr_ref,int nr_dut)
{
    skip_dut_nr_inst += nr_dut;

    while(nr_ref--  > 0){
        ref_difftest_exec(1);
    }
}

void init_difftest(char *ref_so_file,long img_size,int port){
    assert(ref_so_file != NULL);

    void* handle;
    handle = dlopen(ref_so_file, RTLD_LAZY);
    assert(handle);

    ref_difftest_memcpy = (void (*)(paddr_t, void *, size_t, bool)) dlsym(handle, "difftest_memcpy");
    assert(ref_difftest_memcpy);

    ref_difftest_regcpy = (void (*)(void *,  bool)) dlsym(handle, "difftest_regcpy");
    assert(ref_difftest_regcpy);

    ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
    assert(ref_difftest_exec);

    ref_dittest_raise_intr = (void (*)(uint64_t))dlsym(handle, "difftest_raise_intr");
    assert(ref_dittest_raise_intr);

    void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");

    /*写入日志*/

    ref_difftest_init(port);
    ref_difftest_memcpy(RESET_VECTOR,)
}
