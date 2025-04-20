#ifndef KLIB_H__
#define KLIB_H__

#include <am.h>
#include <stddef.h>
#include <stdarg.h>

#ifdef __cplusplus
extern "C" {
#endif

//#define __NATIVE_USE_KLIB__

// string.h
void *memset    (void *s, int c, size_t n);  // 将一块内存区域的内容全部设置为指定的值
void *memcpy    (void *dst, const void *src, size_t n); // 将 n 个字节从 src 复制到 dst
void *memmove   (void *dst, const void *src, size_t n);  // 将源内存区域的内容复制到目标内存区域
int memcmp      (const void *s1, const void *s2, size_t n); // 用于比较两个内存区域的内容是否相同
size_t strlen    (const char *s);
char *strcat     (char *dst, const char *src); // 将字符串 src 连接到字符串 dst 的末尾
char *strcpy     (char *dst, const char *src); // 将字符串 src 复制到 dst
char *strncpy    (char *dst, const char *src, size_t n); // 将最多 n 个字符从 src 复制到 dst
int   strcmp     (const char *s1, const char *s2); // 比较两个字符串的字典顺序。
int    strncmp   (const char *s1, const char *s2, size_t n);
// 比较两个字符串的前 n 个字符。

// stdlib.h
void   srand     (unsigned int seed);
int    rand      (void);
void  *malloc    (size_t size);
void   free      (void *ptr);
int    abs       (int x); // 返回整数 x 的绝对值
int    atoi      (const char *nptr);

// stdio.h
int    printf    (const char *format, ...);
int    sprintf   (char *str, const char *format, ...);
int    snprintf  (char *str, size_t size, const char *format, ...);
int    vsprintf  (char *str, const char *format, va_list ap);
int    vsnprintf (char *str, size_t size, const char *format, va_list ap);

// assert.h
#ifdef NDEBUG
  #define assert(ignore) ((void)0)
#else
  #define assert(cond) \
    do { \
      if (!(cond)) { \
        printf("Assertion fail at %s:%d\n", __FILE__, __LINE__); \
        halt(1); \
      } \
    } while (0)
#endif

#ifdef __cplusplus
}
#endif

#endif
