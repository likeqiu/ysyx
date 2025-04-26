#include<elf.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<isa.h>
#include<memory/paddr.h>

typedef struct 
{
    uint32_t name_offset;
    uint32_t value;
    uint32_t size;
}FuncSymbol;

static FuncSymbol *func_symbols = NULL;
static int func_count = 0;
static char *strtab_data = NULL;
static uint32_t strtab_size = 0;
static int indent_level = 0;


void init_ftrace(const char *elf_file)
{
    FILE *fp = fopen(elf_file, "rb");
    if(!fp)
    {
        printf("Error: Failed to open ELF file: %s \n", elf_file);
        exit(1);
    }
    Elf32_Ehdr ehdr;
    if (fread(&ehdr, sizeof(ehdr), 1, fp) != 1)
    {
        printf("Error: Failed to read ELF header\n");
        fclose(fp);
        exit(1);
    }
    if (strncmp((char *)ehdr.e_ident, "\x7f" "ELF",4) != 0)
    {
        printf("Error: Not an ELF file\n");
        fclose(fp);
        exit(1);
    }

    Elf32_Shdr *shdr = malloc(ehdr.e_shentsize * ehdr.e_shnum);

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

    char *shstrtab = malloc(shdr[ehdr.e_shstrndx].sh_size);
    if (!shstrtab)
    {
        printf("Error: Failed to allocate memory for shstrtab\n");
        free(shdr);
        fclose(fp);
        exit(1);
    }
    fseek(fp, shdr[ehdr.e_shstrndx].sh_offset, SEEK_SET);
    if (fread(shstrtab, shdr[ehdr.e_shstrndx].sh_size, 1, fp) != 1)
    {
        printf("Error: Failed to read shstrtab\n");
        free(shstrtab);
        free(shdr);
        fclose(fp);
        exit(1);
    }

    Elf32_Shdr *symtab_shdr = NULL, *strtab_shdr = NULL;
    for (int i = 0; i < ehdr.e_shnum;i++)
    {
        char *name = shstrtab + shdr[i].sh_name;
        if(strcmp(name,".symtab") == 0) symtab_shdr = &shdr[i];
        if(strcmp(name,".strtab") == 0) strtab_shdr = &shdr[i];
    }


    if(!symtab_shdr || !strtab_shdr)
    {
        printf("ErrorL.symtab or .strtab not Found\n");
        free(shstrtab);
        free(shdr);
        fclose(fp);
        exit(1);
    }

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

    int sym_count = symtab_shdr->sh_size / sizeof(Elf32_Sym);
    Elf32_Sym *symtab = malloc(symtab_shdr->sh_size);
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
    for (int i = 0; i < sym_count;i++)
    {
        if(ELF32_ST_TYPE(symtab[i].st_info) == STT_FUNC)
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
    int idx = 0;
    for (int i = 0; i < sym_count;i++)
    {
        if(ELF32_ST_TYPE(symtab[i].st_info) == STT_FUNC)
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
    for (int i = 0; i < func_count;i++)
    {
        if(addr>=func_symbols[i].value && addr < func_symbols[i].value + func_symbols[i].size)
        {
            return strtab_data + func_symbols[i].name_offset;
        }
    }

    return "???";
}
void ftrace_call(uint32_t pc, uint32_t target_addr)
{
    const char *func_name = addr_to_func(target_addr);

    printf("0x%08x: ", pc);
    for (int i = 0; i < indent_level; i++)
    {
        printf("  ");
    }

    printf(" %-6s [%s@0x%08x]\n", "call", func_name, target_addr);
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

    printf(" %-6s [%s]\n",  "ret", func_name);
}

