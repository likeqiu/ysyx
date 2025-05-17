.DEFAULT_GOAL = app

# Add necessary options if the target is a shared library 根据是否构建共享库（SHARE=1）添加特定的编译和链接选项
ifeq ($(SHARE),1)
SO = -so
# 变量 SO：共享库文件的后缀，值为 -so
CFLAGS  += -fPIC -fvisibility=hidden
# 变量 CFLAGS：编译器标志，添加 -fPIC（生成位置无关代码，适用于共享库）和 -fvisibility=hidden（隐藏符号，减少导出）
LDFLAGS += -shared -fPIC
# 变量 LDFLAGS：链接器标志，添加 -shared（生成共享库）和 -fPIC（位置无关代码）
# 使用位置：用于链接目标文件生成最终 BINARY
endif

WORK_DIR  = $(shell pwd)
BUILD_DIR = $(WORK_DIR)/build

# 变量 INC_PATH：头文件搜索路径，包含 WORK_DIR/include 和外部传入的 INC_PATH
INC_PATH := $(WORK_DIR)/include $(INC_PATH)
# 变量 OBJ_DIR：目标文件存放目录，格式为 build/obj-<NAME><SO>（NAME 由外部传入，SO 为空或 -so）
# 使用位置：用于 .c 和 .cc 编译规则的目标文件路径
OBJ_DIR  = $(BUILD_DIR)/obj-$(NAME)$(SO)
# 变量 BINARY：最终生成的可执行文件或共享库路径，格式为 build/<NAME><SO>
# 使用位置：app 目标的输出文件
BINARY   = $(BUILD_DIR)/$(NAME)$(SO)

# Compilation flags
ifeq ($(CC),clang)
CXX := clang++
else
CXX := g++
endif
LD := $(CXX)
INCLUDES = $(addprefix -I, $(INC_PATH))
# 变量 INCLUDES：头文件路径标志，格式为 -I<路径>，由 INC_PATH 转换而来
# 使用位置：添加到 CFLAGS 中，指定头文件搜索路径
CFLAGS  := -O2 -MMD -Wall -Werror $(INCLUDES) $(CFLAGS)
# 变量 CFLAGS：编译器标志，包含：
#   -O2：优化级别 2
#   -MMD：生成依赖文件（.d 文件），用于自动追踪头文件依赖
#   -Wall：启用所有警告
#   -Werror：将警告视为错误
#   $(INCLUDES)：头文件路径
#   $(CFLAGS)：外部传入的 CFLAGS（追加）
LDFLAGS := -O2 $(LDFLAGS)

OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o) $(CXXSRC:%.cc=$(OBJ_DIR)/%.o)

# Compilation patterns
# 指令作用：将 .c 文件编译为 .o 文件
$(OBJ_DIR)/%.o: %.c
	@echo + CC $<
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)

# 作用：打印编译信息，$< 表示第一个依赖（.c 文件）
# 函数调用：call_fixdep
# 函数原型：call_fixdep(dependency_file, object_file)
# 函数作用（推测）：处理依赖文件（.d），修复或生成正确的依赖关系，确保头文件变更时重新编译
# 参数：
#   $(@:.o=.d)：依赖文件路径（将 .o 替换为 .d）
#   $@：目标文件（.o）

# 指令作用：将 .cc 文件编译为 .o 文件
$(OBJ_DIR)/%.o: %.cc
	@echo + CXX $<
	@mkdir -p $(dir $@)
	@$(CXX) $(CFLAGS) $(CXXFLAGS) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)

# Depencies 包含所有目标文件的依赖文件（.d）


-include $(OBJS:.o=.d)
# 指令作用：加载由 -MMD 生成的 .d 文件，自动追踪源文件和头文件的依赖关系

# Some convenient rules

.PHONY: app clean

# 目标 app：依赖 BINARY，构建最终可执行文件或共享库
# 指令作用：确保 BINARY 被构建，app 是默认目标
app: $(BINARY)

$(BINARY):: $(OBJS) $(ARCHIVES)
	@echo + LD $@
	@$(LD) -o $@ $(OBJS) $(LDFLAGS) $(ARCHIVES) $(LIBS)

#   -o $@：指定输出文件（BINARY）
#   $(OBJS)：目标文件列表
#   $(LDFLAGS)：链接器标志
#   $(ARCHIVES)：归档文件（外部传入）
#   $(LIBS)：外部库（外部传入）

clean:
	-rm -rf $(BUILD_DIR)
