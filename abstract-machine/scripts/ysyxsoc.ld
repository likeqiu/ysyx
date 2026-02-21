ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }

MEMORY {
  FLASH (rx) : ORIGIN = 0x30000000, LENGTH = 0x01000000
  SRAM (rwx) : ORIGIN = 0x0f000000, LENGTH = 0x00002000
}

STACK_SIZE = 0x400;

SECTIONS {
  .text : {
    *(entry)
    *(.text*)
  } > FLASH : text

  etext = .;
  _etext = .;

  .rodata : {
    *(.rodata*)
  } > FLASH : text

  .data : {
    . = ALIGN(4);
    _data_start = .;
    *(.data*)
    *(.sdata*)
    _data_end = .;
    . = ALIGN(4);
  } > SRAM AT> FLASH : data

  edata = .;
  _data = .;

  .bss : {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    _bss_end = .;
  } > SRAM : data

  _data_load = LOADADDR(.data);

  . = ALIGN(16);
  end = .;
  _end = .;
  _heap_start = _end;

  PROVIDE(_sram_end = ORIGIN(SRAM) + LENGTH(SRAM));
  _stack_top = (_sram_end & ~0xF);
  _stack_pointer = _stack_top;
  _stack_bottom = ((_stack_top - STACK_SIZE) & ~0xF);
  _heap_end = _stack_bottom;
  ASSERT((_end <= _stack_bottom), "SRAM overflow: sections overlap stack")

}
