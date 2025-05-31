/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

//_EXPORT 表示一个符号导出宏，它让 difftest_memcpy 函数在编译时被标记为可以被外部程序调用。如果在你的项目中使用动态库（如 .so 或 .dll），这些标记是确保库能够被正确链接的关键部分。
__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction)
{
  void *pmem = guest_to_host(addr);
  if (direction == DIFFTEST_TO_REF)
  {
    /* NPC => NEMU */
    memcpy(pmem, buf, n);
  }
  else
  {
    /* NEMU => NPC */
    memcpy(buf, pmem, n);
  }
}

/*寄存器同步 */
__EXPORT void difftest_regcpy(void *dut, bool direction)
{
  if (direction == DIFFTEST_TO_REF)
  {
    memcpy(&cpu, dut, DIFFTEST_REG_SIZE);
  }
  else
  {
 
    memcpy(dut, &cpu, DIFFTEST_REG_SIZE);
  }
}


__EXPORT void difftest_exec(uint64_t n)
{
  cpu_exec(n); 
}

/*  触发中断 (未实现) */
__EXPORT void difftest_raise_intr(word_t NO)
{
  assert(0);
}

__EXPORT void difftest_init(int port) {
  void init_mem();
  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
}
