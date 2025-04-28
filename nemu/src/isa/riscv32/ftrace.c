#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <isa.h>
#include <memory/paddr.h>
#include "local-include/reg.h"

#define R(i) gpr(i)

typedef struct
{
    uint32_t name_offset;
    uint32_t value;
    uint32_t size;
} FuncSymbol;
// 保存一个函数符号的信

static FuncSymbol *func_symbols = NULL; // 保存所有函数符号信息的数组
static int func_count = 0;
static char *strtab_data = NULL; // 字符串表的内容
static uint32_t strtab_size = 0;
static int indent_level = 0; // 调用层次

// 提取符号表信息
void init_ftrace(const char *elf_file)
{
    FILE *fp = fopen(elf_file, "rb");
    if (!fp)
    {
        printf("Error: Failed to open ELF file: %s \n", elf_file);
        exit(1);
    }
    Elf32_Ehdr ehdr; // 读取 ELF 头，ELF 文件头结构体，包含 ELF 文件的元数据
    if (fread(&ehdr, sizeof(ehdr), 1, fp) != 1)
    {
        printf("Error: Failed to read ELF header\n");
        fclose(fp);
        exit(1);
    }

    // 检查是不是 ELF 文件（魔数检查 \x7fELF）
    // e_ident 是一个数组，是 ELF 文件的魔数 和基本信息，用来确认文件是 ELF 格式，并描述 ELF 文件的一些基本属性。
    if (strncmp((char *)ehdr.e_ident, "\x7f"
                                      "ELF",
                4) != 0)
    {
        printf("Error: Not an ELF file\n");
        fclose(fp);
        exit(1);
    }

    // 读取所有节区头（section header）
    Elf32_Shdr *shdr = malloc(ehdr.e_shentsize * ehdr.e_shnum); // shdr：指向 ELF 文件中所有节区头的指针数组。

    if (!shdr)
    {
        printf("Error: Failed to allocate memory for section headers\n");
        fclose(fp);
        exit(1);
    }
    fseek(fp, ehdr.e_shoff, SEEK_SET);
    if (fread(shdr, ehdr.e_shentsize, ehdr.e_shnum, fp) != ehdr.e_shnum)
    {
        printf("Error: Failed to read section headers\n");
        free(shdr);
        fclose(fp);
        exit(1);
    }

    // 读取节区字符串表（shstrtab），用于找到.symtab和.strtab
    char *shstrtab = malloc(shdr[ehdr.e_shstrndx].sh_size); // ehdr.e_shstrndx 得到 .shstrtab 对应的节区头，然后通过它的 sh_offset 等信息来读取节区名称字符串表的内容。
    if (!shstrtab)
    {
        printf("Error: Failed to allocate memory for shstrtab\n");
        free(shdr);
        fclose(fp);
        exit(1);
    }
    fseek(fp, shdr[ehdr.e_shstrndx].sh_offset, SEEK_SET); // 从 ELF 文件开头算起，到 .shstrtab 节数据开始位置的偏移量
    if (fread(shstrtab, shdr[ehdr.e_shstrndx].sh_size, 1, fp) != 1)
    {
        printf("Error: Failed to read shstrtab\n");
        free(shstrtab);
        free(shdr);
        fclose(fp);
        exit(1);
    }

    // 查找.symtab和.strtab所在的节区
    Elf32_Shdr *symtab_shdr = NULL, *strtab_shdr = NULL; // symtab_shdr，指向符号表节区头的指针，保存符号表的位置和大小，strtab_shdr：指向字符串表节区头的指针，保存字符串表的位置和大小。
    for (int i = 0; i < ehdr.e_shnum; i++)
    {
        char *name = shstrtab + shdr[i].sh_name;
        if (strcmp(name, ".symtab") == 0)
            symtab_shdr = &shdr[i];
        if (strcmp(name, ".strtab") == 0)
            strtab_shdr = &shdr[i];
    }

    if (!symtab_shdr || !strtab_shdr)
    {
        printf("ErrorL.symtab or .strtab not Found\n");
        free(shstrtab);
        free(shdr);
        fclose(fp);
        exit(1);
    }

    // 读取字符串表
    strtab_size = strtab_shdr->sh_size;
    strtab_data = malloc(strtab_size);
    if (!strtab_data)
    {
        printf("Error: Failed to allocate memory for strtab\n");
        free(shstrtab);
        free(shdr);
        fclose(fp);
        exit(1);
    }
    fseek(fp, strtab_shdr->sh_offset, SEEK_SET);
    if (fread(strtab_data, strtab_size, 1, fp) != 1)
    {
        printf("Error: Failed to read strtab\n");
        free(strtab_data);
        free(shstrtab);
        free(shdr);
        fclose(fp);
        exit(1);
    }

    // 读取符号表
    int sym_count = symtab_shdr->sh_size / sizeof(Elf32_Sym); // 计算符号表中总共有多少个符号（symbol）项，符号数量 = 符号表总大小 / 单个符号大小
    Elf32_Sym *symtab = malloc(symtab_shdr->sh_size);         // 符号表数据的指针数组，包含每个符号的详细信息
    if (!symtab)
    {
        printf("Error: Failed to allocate memory for symtab\n");
        free(strtab_data);
        free(shstrtab);
        free(shdr);
        fclose(fp);
        exit(1);
    }
    fseek(fp, symtab_shdr->sh_offset, SEEK_SET);
    if (fread(symtab, sizeof(Elf32_Sym), sym_count, fp) != sym_count)
    {
        printf("Error: Failed to read symtab\n");
        free(symtab);
        free(strtab_data);
        free(shstrtab);
        free(shdr);
        fclose(fp);
        exit(1);
    }

    func_count = 0;
    for (int i = 0; i < sym_count; i++)
    {
        // ELF32_ST_TYPE(x)：是一个宏，用来提取 st_info 里表示符号类型的低 4 位，STT_FUNC：是一个枚举常量，表示 "函数" 类型的符号（function symbol），数值通常是 2
        if (ELF32_ST_TYPE(symtab[i].st_info) == STT_FUNC)
        {
            func_count++;
        }
    }

    func_symbols = malloc(func_count * sizeof(FuncSymbol));
    if (!func_symbols)
    {
        printf("Error: Failed to allocate memory for func_symbols\n");
        free(symtab);
        free(strtab_data);
        free(shstrtab);
        free(shdr);
        fclose(fp);
        exit(1);
    }
    int idx = 0; // 下标
    for (int i = 0; i < sym_count; i++)
    {
        if (ELF32_ST_TYPE(symtab[i].st_info) == STT_FUNC)
        {
            func_symbols[idx].name_offset = symtab[i].st_name;
            func_symbols[idx].value = symtab[i].st_value;
            func_symbols[idx].size = symtab[i].st_size;
            idx++;
        }
    }

    free(symtab);
    free(shstrtab);
    free(shdr);
    fclose(fp);

    Log("ftrace intialized with %d function symbols from %s", func_count, elf_file);
}

const char *addr_to_func(uint32_t addr)
{
    for (int i = 0; i < func_count; i++)
    {
        // 判断当前地址 addr，是不是落在这个函数的地址范围内（[value, value+size)，value：函数在运行时的虚拟地址
        if (addr >= func_symbols[i].value && addr < func_symbols[i].value + func_symbols[i].size)
        {
            return strtab_data + func_symbols[i].name_offset;
        }
    }

    return "???";
}

uint32_t func_to_addr(const char *func_name)
{
    for (int i = 0; i < func_count; i++)
    {
        const char *name = strtab_data + func_symbols[i].name_offset;
        if (strcmp(name, func_name) == 0)
        {
            return func_symbols[i].value;
        }
    }
    return 0;
}

#include <cpu/cpu.h> // 假设可以访问寄存器状态

void ftrace_call(uint32_t pc, uint32_t target_addr)
{
    const char *func_name = addr_to_func(target_addr);
    bool is_memcpy = (strcmp(func_name, "memcpy") == 0);

    // 打印调用信息
    printf("0x%08x: ", pc);
    for (int i = 0; i < indent_level; i++)
    {
        printf("  ");
    }
    printf(" %-6s [%s@0x%08x]", "call", func_name, target_addr);

    // 如果是 memcpy，提取参数

    if (is_memcpy)
    {

        // 假设可以访问当前 CPU 状态（寄存器值）
        uint32_t dest = R(10); // a0
        uint32_t src = R(11);  // a1
        uint32_t size = R(12); // a2

        // 分析地址对齐
        bool dest_aligned = (dest % 4 == 0); // 4 字节对齐
        bool src_aligned = (src % 4 == 0);
        const char *alignment = (dest_aligned && src_aligned) ? "aligned" : (dest_aligned || src_aligned) ? "partially aligned"
                                                                                                          : "unaligned";

        // 分析拷贝长度
        const char *length_category = (size < 16) ? "short" : (size <= 256) ? "medium"
                                                                            : "long";

        // 记录信息
        printf(" {memcpy: dest=0x%08x, src=0x%08x, size=%u, %s, %s}",
               dest, src, size, alignment, length_category);

        // 可选：将信息保存到文件或数据结构用于后续分析
        // 例如：fprintf(log_file, "%s,%u,%s\n", alignment, size, length_category);
    }
    printf("\n");
    indent_level++;
}

void ftrace_ret(uint32_t pc)
{
    const char *func_name = addr_to_func(pc);

    if (indent_level > 0)
        indent_level--;

    printf("0x%08x: ", pc);

    for (int i = 0; i < indent_level; i++)
    {
        printf("  ");
    }

    printf(" %-6s [%s]\n", "ret", func_name);
}
