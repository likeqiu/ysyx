### *Get a more readable version of this Makefile* by `make html` (requires python-markdown)
html:
	cat Makefile | sed 's/^\([^#]\)/    \1/g' | markdown_py > Makefile.html
.PHONY: html
# - 使用 cat 读取 Makefile，通过 sed 将非注释行缩进 4 个空格。
# - 将处理后的内容传递给 markdown_py，生成 HTML 文件 Makefile.html。

## 1. Basic Setup and Checks

### Default to create a bare-metal kernel image
ifeq ($(MAKECMDGOALS),)
  MAKECMDGOALS  = image
  .DEFAULT_GOAL = image
endif
# 默认目标设置：若未指定 make 目标，则默认执行 image 目标。
# MAKECMDGOALS: 表示 make 命令后指定的目标（如 make image 中的 image）。
# .DEFAULT_GOAL: 设置默认目标为 image。

### Override checks when `make clean/clean-all/html`
ifeq ($(findstring $(MAKECMDGOALS),clean|clean-all|html),)
# 跳过检查：当目标为 clean、clean-all 或 html 时，跳过以下环境和架构检查。
# findstring: 检查 MAKECMDGOALS 是否包含 clean、clean-all 或 html。

### Print build info message
$(info # Building $(NAME)-$(MAKECMDGOALS) [$(ARCH)])
# 打印构建信息：显示正在构建的项目名、目标和架构。
# $(info ...): 输出信息到终端，$(NAME) 为项目名，$(MAKECMDGOALS) 为目标，$(ARCH) 为架构。

### Check: environment variable `$AM_HOME` looks sane
ifeq ($(wildcard $(AM_HOME)/am/include/am.h),)
  $(error $$AM_HOME must be an AbstractMachine repo)
endif
# 检查 AM_HOME 环境变量：确保其指向有效的 AbstractMachine 仓库。
# $(wildcard ...): 检查 $(AM_HOME)/am/include/am.h 文件是否存在。
# 若不存在，抛出错误，提示 AM_HOME 必须是 AbstractMachine 仓库。

### Check: environment variable `$ARCH` must be in the supported list
ARCHS = $(basename $(notdir $(shell ls $(AM_HOME)/scripts/*.mk)))
ifeq ($(filter $(ARCHS), $(ARCH)), )
  $(error Expected $$ARCH in {$(ARCHS)}, Got "$(ARCH)")
endif
# 检查 ARCH 环境变量：确保其值在支持的架构列表中。
# ARCHS: 支持的架构列表，从 $(AM_HOME)/scripts/ 目录下的 .mk 文件名提取。
# $(basename $(notdir ...)): 去除路径和扩展名，获取文件名。
# $(filter ...): 检查 $(ARCH) 是否在 $(ARCHS) 中，若不在，抛出错误。

### Extract instruction set architecture (`ISA`) and platform from `$ARCH`. Example: `ARCH=x86_64-qemu -> ISA=x86_64; PLATFORM=qemu`
ARCH_SPLIT = $(subst -, ,$(ARCH))
ISA        = $(word 1,$(ARCH_SPLIT))
PLATFORM   = $(word 2,$(ARCH_SPLIT))
# 解析 ARCH：从 ARCH 中提取指令集体系结构（ISA）和平台。
# ARCH_SPLIT: 将 ARCH 中的 - 替换为空格（如 x86_64-qemu 变为 x86_64 qemu）。
# ISA: 提取第一个单词作为指令集体系结构（如 x86_64）。
# PLATFORM: 提取第二个单词作为平台（如 qemu）。

### Check if there is something to build
ifeq ($(flavor SRCS), undefined)
  $(error Nothing to build)
endif
# 检查 SRCS 变量：确保定义了需要编译的源文件。
# $(flavor SRCS): 检查 SRCS 变量的类型，若未定义，抛出错误。

### Checks end here
endif
# 检查结束：以上检查仅在目标非 clean、clean-all 或 html 时执行。

## 2. General Compilation Targets

### Create the destination directory (`build/$ARCH`)
WORK_DIR  = $(shell pwd)
DST_DIR   = $(WORK_DIR)/build/$(ARCH)
$(shell mkdir -p $(DST_DIR))
# 创建编译输出目录：
# WORK_DIR: 当前工作目录，使用 pwd 命令获取。
# DST_DIR: 编译输出目录，格式为 build/$(ARCH)，如 build/x86_64-qemu。
# $(shell mkdir -p ...): 创建 DST_DIR 目录，若不存在则自动创建。

### Compilation targets (a binary image or archive)
IMAGE_REL = build/$(NAME)-$(ARCH)
IMAGE     = $(abspath $(IMAGE_REL))
ARCHIVE   = $(WORK_DIR)/build/$(NAME)-$(ARCH).a
# 定义编译目标：
# IMAGE_REL: 内核镜像的相对路径，如 build/project-x86_64-qemu。
# IMAGE: 内核镜像的绝对路径，使用 abspath 转换。
# ARCHIVE: 静态库文件路径，如 build/project-x86_64-qemu.a。

### Collect the files to be linked: object files (`.o`) and libraries (`.a`)
OBJS      = $(addprefix $(DST_DIR)/, $(addsuffix .o, $(basename $(SRCS))))
LIBS     := $(sort $(LIBS) am klib)
LINKAGE   = $(OBJS) \
  $(addsuffix -$(ARCH).a, $(join \
    $(addsuffix /build/, $(addprefix $(AM_HOME)/, $(LIBS))), \
    $(LIBS) ))
# 收集链接文件：
# OBJS: 目标文件列表，将 SRCS 中的源文件（如 .c、.S）转换为 .o 文件，位于 DST_DIR。
# LIBS: 需要链接的库列表，默认为 am 和 klib，使用 sort 排序并去重。
# LINKAGE: 链接时使用的所有文件，包括 OBJS 和库文件（如 am-x86_64-qemu.a）。

## 3. General Compilation Flags

### (Cross) compilers, e.g., mips-linux-gnu-g++
AS        = $(CROSS_COMPILE)gcc
CC        = $(CROSS_COMPILE)gcc
CXX       = $(CROSS_COMPILE)g++
LD        = $(CROSS_COMPILE)ld
AR        = $(CROSS_COMPILE)ar
OBJDUMP   = $(CROSS_COMPILE)objdump
OBJCOPY   = $(CROSS_COMPILE)objcopy
READELF   = $(CROSS_COMPILE)readelf
# 定义交叉编译工具链：
# CROSS_COMPILE: 交叉编译前缀，如 mips-linux-gnu-。
# AS: 汇编器，使用 gcc。
# CC: C 编译器，使用 gcc。
# CXX: C++ 编译器，使用 g++。
# LD: 链接器，使用 ld。
# AR: 归档工具，使用 ar，生成静态库。
# OBJDUMP: 反汇编工具，使用 objdump。
# OBJCOPY: 对象复制工具，使用 objcopy，转换文件格式。
# READELF: ELF 文件分析工具，使用 readelf。

### Compilation flags
INC_PATH += $(WORK_DIR)/include $(addsuffix /include/, $(addprefix $(AM_HOME)/, $(LIBS)))
INCFLAGS += $(addprefix -I, $(INC_PATH))
# 定义头文件路径：
# INC_PATH: 包含当前工作目录的 include 和 LIBS 的 include 目录。
# INCFLAGS: 转换为编译器的 -I 标志，指定头文件搜索路径。

ARCH_H := arch/$(ARCH).h
CFLAGS   += -O2 -MMD -Wall -Werror $(INCFLAGS) \
            -D__ISA__=\"$(ISA)\" -D__ISA_$(shell echo $(ISA) | tr a-z A-Z)__ \
            -D__ARCH__=$(ARCH) -D__ARCH_$(shell echo $(ARCH) | tr a-z A-Z | tr - _) \
            -D__PLATFORM__=$(PLATFORM) -D__PLATFORM_$(shell echo $(PLATFORM) | tr a-z A-Z | tr - _) \
            -DARCH_H=\"$(ARCH_H)\" \
            -fno-asynchronous-unwind-tables -fno-builtin -fno-stack-protector \
            -Wno-main -U_FORTIFY_SOURCE -fvisibility=hidden -fno-optimize-sibling-calls
# CFLAGS: C 编译器标志。
# 具体标志说明：
# - -O2: 优化级别 2，提升性能。
# - -MMD: 生成依赖文件（.d），记录头文件依赖。
# - -Wall: 启用所有警告。
# - -Werror: 将警告视为错误。
# - $(INCFLAGS): 头文件路径。
# - -D__ISA__=\"$(ISA)\": 定义宏 __ISA__，值为指令集体系结构。
# - -D__ISA_...: 定义大写 ISA 宏，如 __ISA_X86_64__。
# - -D__ARCH__...: 定义架构宏。
# - -D__PLATFORM__...: 定义平台宏。
# - -DARCH_H...: 定义架构头文件路径。
# - -fno-asynchronous-unwind-tables: 禁用异步展开表，减小二进制文件大小。
# - -fno-builtin: 禁用内置函数，适合裸机环境。
# - -fno-stack-protector: 禁用栈保护，适合嵌入式系统。
# - -Wno-main: 忽略 main 函数警告。
# - -U_FORTIFY_SOURCE: 禁用缓冲区溢出保护。
# - -fvisibility=hidden: 隐藏符号，减小导出符号。

CXXFLAGS += $(CFLAGS) -ffreestanding -fno-rtti -fno-exceptions
# CXXFLAGS: C++ 编译器标志，继承 CFLAGS。
# 具体标志说明：
# - -ffreestanding: 编译为独立环境，适合裸机或内核开发。
# - -fno-rtti: 禁用运行时类型信息，减小二进制文件大小。
# - -fno-exceptions: 禁用异常处理，适合嵌入式系统。

ASFLAGS  += -MMD $(INCFLAGS)
# ASFLAGS: 汇编器标志。
# 具体标志说明：
# - -MMD: 生成依赖文件。
# - $(INCFLAGS): 头文件路径。

LDFLAGS  += -z noexecstack $(addprefix -T, $(LDSCRIPTS))
# LDFLAGS: 链接器标志。
# 具体标志说明：
# - -z noexecstack: 标记栈不可执行，增强安全性。
# - $(addprefix -T, $(LDSCRIPTS)): 指定链接脚本。

## 4. Arch-Specific Configurations

### Paste in arch-specific configurations (e.g., from `scripts/x86_64-qemu.mk`)
-include $(AM_HOME)/scripts/$(ARCH).mk
# 包含架构特定的配置文件，如 scripts/x86_64-qemu.mk。
# -include: 若文件不存在，不会报错。

## 5. Compilation Rules

### Rule (compile): a single `.c` -> `.o` (gcc)
$(DST_DIR)/%.o: %.c
	@mkdir -p $(dir $@) && echo + CC $<
	@$(CC) -std=gnu11 $(CFLAGS) -c -o $@ $(realpath $<)
# 编译 C 文件：
# - 将 .c 文件编译为 .o 文件，输出到 DST_DIR。
# - @mkdir -p: 创建输出目录。
# - echo + CC $<: 显示正在编译的文件。
# - -std=gnu11: 使用 GNU C11 标准。
# - -c: 仅编译，不链接。
# - $@: 目标文件（.o）。
# - $<: 源文件（.c）。

### Rule (compile): a single `.cc` -> `.o` (g++)
$(DST_DIR)/%.o: %.cc
	@mkdir -p $(dir $@) && echo + CXX $<
	@$(CXX) -std=c++17 $(CXXFLAGS) -c -o $@ $(realpath $<)
# 编译 C++ 文件（.cc）：
# - 将 .cc 文件编译为 .o 文件。
# - -std=c++17: 使用 C++17 标准。

### Rule (compile): a single `.cpp` -> `.o` (g++)
$(DST_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@) && echo + CXX $<
	@$(CXX) -std=c++17 $(CXXFLAGS) -c -o $@ $(realpath $<)
# 编译 C++ 文件（.cpp）：
# - 与 .cc 规则类似，处理 .cpp 文件。

### Rule (compile): a single `.S` -> `.o` (gcc, which preprocesses and calls as)
$(DST_DIR)/%.o: %.S
	@mkdir -p $(dir $@) && echo + AS $<
	@$(AS) $(ASFLAGS) -c -o $@ $(realpath $<)
# 编译汇编文件：
# - 将 .S 文件编译为 .o 文件。
# - 使用 gcc 预处理后调用汇编器。

### Rule (recursive make): build a dependent library (am, klib, ...)
$(LIBS): %:
	@$(MAKE) -s -C $(AM_HOME)/$* archive
# 构建依赖库：
# - 递归调用 make 在 $(AM_HOME)/am 或 $(AM_HOME)/klib 中构建静态库。
# - -s: 静默模式，减少输出。
# - -C: 切换到指定目录。

### Rule (link): objects (`*.o`) and libraries (`*.a`) -> `IMAGE.elf`, the final ELF binary to be packed into image (ld)
$(IMAGE).elf: $(LINKAGE) $(LDSCRIPTS)
	@echo \# Creating image [$(ARCH)]
	@echo + LD "->" $(IMAGE_REL).elf
ifneq ($(filter $(ARCH),native),)
	@$(CXX) -o $@ -Wl,--whole-archive $(LINKAGE) -Wl,-no-whole-archive $(LDFLAGS_CXX)
else
	@$(LD) $(LDFLAGS) -o $@ --start-group $(LINKAGE) --end-group
endif
# 链接生成 ELF 文件：
# - 将目标文件和库链接为 $(IMAGE).elf。
# - 若 ARCH 为 native，使用 g++ 链接，包含 --whole-archive 选项。
# - 否则使用 ld 链接，包含 --start-group 和 --end-group。
# - $(LINKAGE): 目标文件和库。
# - $(LDSCRIPTS): 链接脚本。

### Rule (archive): objects (`*.o`) -> `ARCHIVE.a` (ar)
$(ARCHIVE): $(OBJS)
	@echo + AR "->" $(shell realpath $@ --relative-to .)
	@$(AR) rcs $@ $^
# 归档生成静态库：
# - 将目标文件打包为 $(ARCHIVE) 静态库。
# - rcs: 替换、创建、排序归档文件。

### Rule (`#include` dependencies): paste in `.d` files generated by gcc on `-MMD`
-include $(addprefix $(DST_DIR)/, $(addsuffix .d, $(basename $(SRCS))))
# 包含依赖文件：
# - 自动包含 gcc 生成的 .d 文件，记录头文件依赖。
#basename 函数去除文件名中的扩展名,addsuffix 函数为每个文件名添加指定的后缀（这里是 .d）addprefix 函数为每个文件名添加指定的前缀（这里是 $(DST_DIR)/
#.d 文件实现了自动依赖跟踪，确保 make 能正确处理头文件更改

## 6. Miscellaneous

### Build order control
image: image-dep
archive: $(ARCHIVE)
image-dep: $(LIBS) $(IMAGE).elf
.NOTPARALLEL: image-dep
.PHONY: image image-dep archive run $(LIBS)
# 控制构建顺序：
# - image: 依赖 image-dep，生成最终镜像。
# - archive: 生成静态库 $(ARCHIVE)。
# - image-dep: 依赖 $(LIBS) 和 $(IMAGE).elf，确保库和 ELF 文件先构建。
# - .NOTPARALLEL: 禁止 image-dep 并行执行。
# - .PHONY: 声明伪目标。

### Clean a single project (remove `build/`)
clean:
	rm -rf Makefile.html $(WORK_DIR)/build/
.PHONY: clean
# clean: 清理当前项目。
# - 删除 Makefile.html 和 build 目录。
# - .PHONY: 声明 clean 为伪目标。

### Clean all sub-projects within depth 2 (and ignore errors)
CLEAN_ALL = $(dir $(shell find . -mindepth 2 -name Makefile))
clean-all: $(CLEAN_ALL) clean
$(CLEAN_ALL):
	-@$(MAKE) -s -C $@ clean
.PHONY: clean-all $(CLEAN_ALL)
# clean-all: 清理所有子项目。
# - CLEAN_ALL: 查找深度 2 以内的子目录中的 Makefile 所在目录。
# - 递归调用 make clean 清理子项目。
# - -@: 忽略子项目清理中的错误。


