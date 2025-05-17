#***************************************************************************************
# Copyright (c) 2014-2024 Zihao Yu, Nanjing University
#
# NEMU is licensed under Mulan PSL v2.
# You can use this software according to the terms and conditions of the Mulan PSL v2.
# You may obtain a copy of Mulan PSL v2 at:
#          http://license.coscl.org.cn/MulanPSL2
#
# THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
# EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
# MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
#
# See the Mulan PSL v2 for more details.
#**************************************************************************************/

-include $(NEMU_HOME)/../Makefile
include $(NEMU_HOME)/scripts/build.mk

include $(NEMU_HOME)/tools/difftest.mk

# 函数调用：git_commit
# 函数原型：git_commit(message)
# 函数作用（推测）：在 Git 仓库中记录一次提交，提交信息为参数 message（此处为 "compile NEMU"），可能用于跟踪构建历史
# 指令作用：调用 git_commit 函数，记录 NEMU 编译操作的 Git 提交
compile_git:
	$(call git_commit, "compile NEMU")
$(BINARY):: compile_git

# 变量 BINARY：最终生成的可执行文件或共享库路径（由 build.mk 或其他文件定义）
# 使用位置：作为 run-env、run、gdb 目标的依赖
# 指令作用：确保在构建 BINARY 之前执行 compile_git 目标，记录 Git 提交

# Some convenient rules 定义便捷的运行、调试和清理规则

# 变量 ARGS：NEMU 的运行参数，默认为 --log=<BUILD_DIR>/nemu-log.txt
override ARGS ?= --log=$(BUILD_DIR)/nemu-log.txt
# 变量 ARGS_DIFF：差分测试参数（由 difftest.mk 定义）
# 使用位置：构造 NEMU_EXEC
# 指令作用：将差分测试参数追加到 ARGS，确保 NEMU 运行时包含差分测试配置
override ARGS += $(ARGS_DIFF)

# Command to execute NEMU
# 变量 IMG：NEMU 的镜像文件路径（外部传入，默认为空
IMG ?=
NEMU_EXEC := $(BINARY) $(ARGS) $(IMG)
# 使用位置：run 和 gdb 目标的执行命令
# 指令作用：组合 BINARY、ARGS 和 IMG，生成完整的 NEMU 运行命令（如 ./build/nemu --log=xxx nemu-log.txt <image>）

# 目标 run-env：准备运行环境
run-env: $(BINARY) $(DIFF_REF_SO)

run: run-env
	$(call git_commit, "run NEMU")
	$(NEMU_EXEC)

gdb: run-env
	$(call git_commit, "gdb NEMU")
	gdb -s $(BINARY) --args $(NEMU_EXEC)

# 变量 clean-tools：tools 目录下包含 Makefile 的子目录列表
clean-tools = $(dir $(shell find ./tools -maxdepth 2 -mindepth 2 -name "Makefile"))
$(clean-tools):
	-@$(MAKE) -s -C $@ clean
clean-tools: $(clean-tools)
clean-all: clean distclean clean-tools

.PHONY: run gdb run-env clean-tools clean-all $(clean-tools)
