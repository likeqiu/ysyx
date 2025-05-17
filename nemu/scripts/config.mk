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

COLOR_RED := $(shell echo "\033[1;31m")
COLOR_END := $(shell echo "\033[0m")

ifeq ($(wildcard .config),)
$(warning $(COLOR_RED)Warning: .config does not exist!$(COLOR_END))
# 指令作用：如果 .config 文件不存在，输出红色警告信息提示用户
$(warning $(COLOR_RED)To build the project, first run 'make menuconfig'.$(COLOR_END))
# 指令作用：提示用户运行 make menuconfig 生成 .config 文件
endif

# 变量 Q：命令前缀，用于控制命令输出, 指令作用：@ 前缀抑制命令本身的输出，仅显示命令结果（如编译输出）
Q            := @
# 变量 NEMU_HOME：NEMU 项目的主目录路径（外部传入）
# 使用位置：构造 CONF 和 MCONF 的路径
# 指令作用：指定 kconfig 工具的源码和构建目录
KCONFIG_PATH := $(NEMU_HOME)/tools/kconfig
# 使用位置：构造 FIXDEP 的路径
# 指令作用：指定 fixdep 工具的源码和构建目录
FIXDEP_PATH  := $(NEMU_HOME)/tools/fixdep
# 使用位置：menuconfig、savedefconfig、%defconfig 目标
# 指令作用：指定 NEMU 项目的 Kconfig 文件，用于 menuconfig 配置
Kconfig      := $(NEMU_HOME)/Kconfig
# 变量 rm-distclean：distclean 目标要删除的文件和目录
rm-distclean += include/generated include/config .config .config.old
# 变量 silent：make 命令的静默选项
silent := -s

# 变量 CONF：kconfig 的 conf 工具路径
# 指令作用：指定 conf 工具的可执行文件路径，用于处理 Kconfig 配置
CONF   := $(KCONFIG_PATH)/build/conf
# 变量 MCONF：kconfig 的 mconf 工具路径
# 指令作用：指定 mconf 工具的可执行文件路径，用于提供菜单式配置界面
MCONF  := $(KCONFIG_PATH)/build/mconf
# 变量 FIXDEP：fixdep 工具路径
# 指令作用：指定 fixdep 工具的可执行文件路径，用于处理依赖文件
FIXDEP := $(FIXDEP_PATH)/build/fixdep

# 目标 CONF：构建 conf 工具
$(CONF):
	$(Q)$(MAKE) $(silent) -C $(KCONFIG_PATH) NAME=conf

# 指令作用：在 KCONFIG_PATH 目录下运行 make NAME=conf，构建 conf 工具
# 指令选项：
#   -C <dir>：切换到 KCONFIG_PATH 目录执行 make
#   -s：静默模式，不输出 make 详细信息
#   @：抑制命令输出
#   NAME=conf：指定构建目标为 conf


# 目标 MCONF：构建 mconf 工具
$(MCONF):
	$(Q)$(MAKE) $(silent) -C $(KCONFIG_PATH) NAME=mconf

# 指令作用：在 KCONFIG_PATH 目录下运行 make NAME=mconf，构建 mconf 工具
# 指令选项：同上，NAME=mconf 指定构建目标为 mconf



# 目标 FIXDEP：构建 fixdep 工具
$(FIXDEP):
	$(Q)$(MAKE) $(silent) -C $(FIXDEP_PATH)

# 指令作用：在 FIXDEP_PATH 目录下运行 make，构建 fixdep 工具
# 指令选项：同上，无 NAME 参数，依赖 FIXDEP_PATH 的 Makefile 定义


# 目标 menuconfig：运行 menuconfig 配置
menuconfig: $(MCONF) $(CONF) $(FIXDEP)
	$(Q)$(MCONF) $(Kconfig)
	$(Q)$(CONF) $(silent) --syncconfig $(Kconfig)

# 目标 savedefconfig：保存最小化配置
savedefconfig: $(CONF)
	$(Q)$< $(silent) --$@=configs/defconfig $(Kconfig)

# 目标 %defconfig：加载指定的 defconfig 配置
%defconfig: $(CONF) $(FIXDEP)
	$(Q)$< $(silent) --defconfig=configs/$@ $(Kconfig)
	$(Q)$< $(silent) --syncconfig $(Kconfig)

.PHONY: menuconfig savedefconfig defconfig

# Help text used by make help
# 目标 help：显示帮助信息
help:
	@echo  '  menuconfig	  - Update current config utilising a menu based program'
	@echo  '  savedefconfig   - Save current config as configs/defconfig (minimal config)'

distclean: clean
	-@rm -rf $(rm-distclean)

.PHONY: help distclean

# 定义 call_fixdep 函数
define call_fixdep
	@$(FIXDEP) $(1) $(2) unused > $(1).tmp
	@mv $(1).tmp $(1)
endef

# 函数原型：call_fixdep(dependency_file, object_file)
# 函数作用：运行 fixdep 工具处理依赖文件（.d），生成正确的依赖关系，忽略第三个参数（unused），并将结果保存到临时文件后覆盖原文件
# 参数：
#   $(1)：依赖文件路径（如 .d 文件）
#   $(2)：目标文件路径（如 .o 文件）
# 使用位置：由 build.mk 或其他文件调用（如编译 .c/.cc 文件后处理依赖）
