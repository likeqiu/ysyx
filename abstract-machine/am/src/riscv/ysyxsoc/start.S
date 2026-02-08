.section entry, "ax"
.globl _start
.type _start, @function

_start:
  mv s0, zero
  la sp, _stack_pointer

  la t0, _data_start
  la t1, _data_end
  la t2, _data_load
  bgeu t0, t1, 2f
1:
  lw a0, 0(t2)
  sw a0, 0(t0)
  addi t0, t0, 4
  addi t2, t2, 4
  bltu t0, t1, 1b
2:
  la t0, _bss_start
  la t1, _bss_end
  bgeu t0, t1, 4f
3:
  sw zero, 0(t0)
  addi t0, t0, 4
  bltu t0, t1, 3b
4:
  call _trm_init

.size _start, . - _start
