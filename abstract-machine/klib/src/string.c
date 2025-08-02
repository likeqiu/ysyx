#include <klib-macros.h>
#include <klib.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t num = 0;
  while (*s++) {
    num++;
  }
  return num;
  // panic("Not implemented"); // 这行永远不会执行到，应该移除
}

char *strcpy(char *dst, const char *src) {
  char *d = dst;
  while ((*d++ = *src++)) // 修正：应该是赋值操作 = 而不是复合赋值 +=
  {
    ;
  }
  return dst; // 返回基础地址
  // panic("Not implemented"); // 这行永远不会执行到，应该移除
}

char *strncpy(char *dst, const char *src, size_t n) {
  char *d = dst;
  while (n > 0 && *src) { // 复制非终止符字符
    *d++ = *src++;
    n--;
  }
  while (n-- > 0) { // 填充剩余空间为 '\0'
    *d++ = '\0';
  }
  return dst;
}

char *strcat(char *dst, const char *src) {
  char *d = dst;
  while (*d) {
    d++;
  }
  while ((*d++ = *src++)) // 修正：应该是赋值操作 = 而不是复合赋值 +=
    ;
  return dst;
  // panic("Not implemented"); // 这行永远不会执行到，应该移除
}

int strcmp(const char *s1, const char *s2) {
  while (*s1 && (*s1 == *s2)) {
    s1++;
    s2++;
  }
  // 这里只判断是因为当s2为'\0'时，s1不为'\0'那么第二个条件不满足，也实现了判断
  return *(unsigned char *)s1 -
         *(unsigned char *)
             s2; //*s1 和 *s2 是 char 类型，符号性依赖平台， unsigned char
                 //转换成无符号进行比较，C 标准要求按 unsigned char 值比较，转换
                 //(unsigned char *) 确保跨平台一致性。
  // panic("Not implemented"); // 这行永远不会执行到，应该移除
}

int strncmp(const char *s1, const char *s2, size_t n) {
  while (n > 0 && *s1 && *s2 && *s1 == *s2) {
    n--;
    s1++;
    s2++;
  }
  if (n == 0) {
    return 0;
  }
  return *(unsigned char *)s1 - *(unsigned char *)s2;
  // panic("Not implemented"); // 这行永远不会执行到，应该移除
}

void *memset(void *s, int c, size_t n) {
  unsigned char *d = s;
  //  void * 不能直接解引用（*s 非法），需要转换为具体类型。
  // 一个字节为8位，unsigned char 是最适合操作单个字节的类型，因为它保证是 8
  // 位无符号整数
  while (n--) {
    *d++ = (unsigned char)c;
  }
  return s;
  // panic("Not implemented"); // 这行永远不会执行到，应该移除
}

void *memmove(void *dst, const void *src, size_t n) {
  char *d = dst;
  const char *p = src;
  if (d < p || (d >= p + n)) { // 修正：没有重叠或dst在src前面，正向复制
    while (n--) {
      *d++ = *p++;
    }
  } else {
    // 有重叠且dst在src后面，反向复制
    d += n;
    p += n;
    while (n--) {
      *--d = *--p; // --d能确保写入正确的地址
    }
  }
  return dst;
  // panic("Not implemented"); // 这行永远不会执行到，应该移除
}

void *memcpy(void *out, const void *in, size_t n) {
  char *d = out;
  const char *p = in;
  while (n--) {
    *d++ = *p++;
  }
  return out;
  // panic("Not implemented"); // 这行永远不会执行到，应该移除
}

int memcmp(const void *s1, const void *s2, size_t n) {
  const unsigned char *d = s1;
  const unsigned char *p = s2;
  while (n--) {
    if (*d != *p) {
      return *d - *p;
    }
    d++;
    p++;
  }
  return 0;
  // panic("Not implemented"); // 这行永远不会执行到，应该移除
}

#endif
