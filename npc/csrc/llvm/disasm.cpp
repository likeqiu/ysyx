
#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <cstdint>  // 添加
#include <cstring>  // 添加
#include <unistd.h> // 添加: write, close, unlink

// 动态库函数指针类型
typedef int (*llvm_disasm_init_t)(const char *);
typedef int (*llvm_disasm_instruction_t)(uint64_t, uint32_t, int, char *, size_t);
typedef void (*llvm_disasm_cleanup_t)();

// 动态库句柄和函数指针
static void *llvm_lib_handle = nullptr;
static llvm_disasm_init_t f_llvm_disasm_init = nullptr;
static llvm_disasm_instruction_t f_llvm_disasm_instruction = nullptr;
static llvm_disasm_cleanup_t f_llvm_disasm_cleanup = nullptr;

// 是否成功加载动态库
static bool lib_loaded = false;

extern "C" void init_disasm_llvm()
{
    // 尝试加载包装器动态库
    const char *wrapper_libs[] = {
        "./libllvm_wrapper.so",
        "/usr/local/lib/libllvm_wrapper.so",
        "libllvm_wrapper.so"};

    for (int i = 0; i < 3; i++)
    {
        llvm_lib_handle = dlopen(wrapper_libs[i], RTLD_LAZY);
        if (llvm_lib_handle)
        {
            printf("Successfully loaded LLVM wrapper: %s\n", wrapper_libs[i]);
            break;
        }
    }

    if (!llvm_lib_handle)
    {
        fprintf(stderr, "Cannot load LLVM wrapper library: %s\n", dlerror());
        fprintf(stderr, "Falling back to system objdump\n");
        return;
    }

    // 加载函数符号
    f_llvm_disasm_init = (llvm_disasm_init_t)dlsym(llvm_lib_handle, "llvm_disasm_init");
    f_llvm_disasm_instruction = (llvm_disasm_instruction_t)dlsym(llvm_lib_handle, "llvm_disasm_instruction");
    f_llvm_disasm_cleanup = (llvm_disasm_cleanup_t)dlsym(llvm_lib_handle, "llvm_disasm_cleanup");

    if (!f_llvm_disasm_init || !f_llvm_disasm_instruction || !f_llvm_disasm_cleanup)
    {
        fprintf(stderr, "Cannot load LLVM wrapper functions: %s\n", dlerror());
        dlclose(llvm_lib_handle);
        llvm_lib_handle = nullptr;
        return;
    }

    // 初始化LLVM反汇编器
    if (f_llvm_disasm_init("riscv32"))
    {
        lib_loaded = true;
        printf("LLVM disassembler initialized successfully\n");
    }
    else
    {
        fprintf(stderr, "Failed to initialize LLVM disassembler\n");
        dlclose(llvm_lib_handle);
        llvm_lib_handle = nullptr;
    }
}

extern "C" void free_disasm_llvm()
{
    if (lib_loaded && f_llvm_disasm_cleanup)
    {
        f_llvm_disasm_cleanup();
    }

    if (llvm_lib_handle)
    {
        dlclose(llvm_lib_handle);
        llvm_lib_handle = nullptr;
    }

    lib_loaded = false;
}

// 使用objdump作为后备方案
static void objdump_disasm(long long pc, unsigned int instruction_word, int instr_len_bytes)
{
    char cmd[512];
    char temp_file[] = "/tmp/disasm_XXXXXX";
    int fd = mkstemp(temp_file);

    if (fd == -1)
    {
        printf("0x%08llx: 0x%08x \t(Error creating temp file)\n", pc, instruction_word);
        return;
    }

    // 写入二进制数据
    uint8_t bytes[instr_len_bytes];
    for (int i = 0; i < instr_len_bytes; ++i)
    {
        bytes[i] = (instruction_word >> (i * 8)) & 0xFF;
    }
    write(fd, bytes, instr_len_bytes);
    close(fd);

    // 使用objdump反汇编
    snprintf(cmd, sizeof(cmd),
             "objdump -D -b binary -m riscv:rv32 --adjust-vma=0x%llx %s 2>/dev/null | "
             "grep -E '^[[:space:]]*%llx:' | head -1 | "
             "sed 's/^[[:space:]]*[0-9a-f]*:[[:space:]]*[0-9a-f]*[[:space:]]*//'",
             pc, temp_file, pc);

    FILE *fp = popen(cmd, "r");
    if (fp)
    {
        char result[256];
        if (fgets(result, sizeof(result), fp))
        {
            // 移除换行符
            result[strcspn(result, "\n")] = 0;
            if (strlen(result) > 0)
            {
                printf("0x%08llx: 0x%08x \t%s\n", pc, instruction_word, result);
            }
            else
            {
                printf("0x%08llx: 0x%08x \t(Unknown)\n", pc, instruction_word);
            }
        }
        else
        {
            printf("0x%08llx: 0x%08x \t(Unknown)\n", pc, instruction_word);
        }
        pclose(fp);
    }
    else
    {
        printf("0x%08llx: 0x%08x \t(Disasm failed)\n", pc, instruction_word);
    }

    unlink(temp_file);
}

extern "C" void itrace_print(long long pc, unsigned int instruction_word, int instr_len_bytes)
{
    if (lib_loaded && f_llvm_disasm_instruction)
    {
        // 使用LLVM动态库
        char output[256];
        int result = f_llvm_disasm_instruction((uint64_t)pc, instruction_word,
                                               instr_len_bytes, output, sizeof(output));

        if (result > 0)
        {
            printf("0x%08llx: 0x%08x \t%s\n", pc, instruction_word, output);
            return;
        }
    }

    // 后备方案：使用objdump
    objdump_disasm(pc, instruction_word, instr_len_bytes);
}