#ifndef _COMMON_H_
#define _COMMON_H_

#include <vector> //:vector 是一个序列容器，它封装了动态大小的数组。
#include <cstdint> //提供了固定宽度的整型类型。
#include <stdexcept> //定义了标准异常类
#include <iostream>  //提供了输入/输出流的功能。
#include <fstream> //提供了文件流的功能。
#include <cstdio>
#include <cassert>
#include <cstring>

#include <generated/autoconf.h>
#include <macro.h>

#ifdef CONFIG_TARGET_AM
#include <klib.h>
#else
#include <assert.h>
#include <stdlib.h>
#endif

#if CONFIG_MBASE + CONFIG_MSIZE > 0x100000000ul
#define PMEM64 1
#endif

typedef MUXDEF(CONFIG_ISA64, uint64_t, uint32_t) word_t;
typedef MUXDEF(CONFIG_ISA64, int64_t, int32_t) sword_t;
#define FMT_WORD MUXDEF(CONFIG_ISA64, "0x%016" PRIx64, "0x%08" PRIx32)

typedef word_t vaddr_t;
typedef MUXDEF(PMEM64, uint64_t, uint32_t) paddr_t;
#define FMT_PADDR MUXDEF(PMEM64, "0x%016" PRIx64, "0x%08" PRIx32)
typedef uint16_t ioaddr_t;

#include <debug.h>

#endif