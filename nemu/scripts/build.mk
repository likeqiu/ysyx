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
CFLAGS  := -O2 -MMD -Wall -Werror $(INCLUDES) $(CFLAGS)
LDFLAGS := -O2 $(LDFLAGS)

OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o) $(CXXSRC:%.cc=$(OBJ_DIR)/%.o)

# Compilation patterns
$(OBJ_DIR)/%.o: %.c
	@echo + CC $<
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)

$(OBJ_DIR)/%.o: %.cc
	@echo + CXX $<
	@mkdir -p $(dir $@)
	@$(CXX) $(CFLAGS) $(CXXFLAGS) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)

# Depencies
-include $(OBJS:.o=.d)

# Some convenient rules

.PHONY: app clean

app: $(BINARY)

$(BINARY):: $(OBJS) $(ARCHIVES)
	@echo + LD $@
	@$(LD) -o $@ $(OBJS) $(LDFLAGS) $(ARCHIVES) $(LIBS)

clean:
	-rm -rf $(BUILD_DIR)
