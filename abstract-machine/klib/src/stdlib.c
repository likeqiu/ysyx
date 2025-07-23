#include <am.h>
#include <klib.h>
#include <klib-macros.h>




static void *addr = NULL;

static inline void *align_up(void *ptr,size_t align) {
  uintptr_t p = (uintptr_t)ptr;
  uintptr_t aligned = (p + align -1) & ~(align - 1);

  return (void *)aligned;
}

 #if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

static unsigned long int next = 1;

int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
  next = seed;
}

int abs(int x) {
  return (x < 0 ? -x : x);
}

int atoi(const char* nptr) {
  int x = 0;
  while (*nptr == ' ') { nptr ++; }
  while (*nptr >= '0' && *nptr <= '9') {
    x = x * 10 + *nptr - '0';
    nptr ++;
  }
  return x;
}

void *malloc(size_t size) {
  // On native, malloc() will be called during initializaion of C runtime.
  // Therefore do not call panic() here, else it will yield a dead recursion:
  //   panic() -> putchar() -> (glibc) -> malloc() -> panic()

  if (addr == NULL) {
    addr = heap.start;
  }

  if (size == 0) {
    return NULL;
  }

  void *current = align_up(addr, 8);

  void *next_addr = (char *)current + size;

  if (next_addr > heap.end) {
    return NULL;
  }

  addr = next_addr;
  return current;

#if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
  panic("Not implemented");
#endif
  return NULL;
}

void free(void *ptr) {
}

#endif
