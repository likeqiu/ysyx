#include <am.h>
#include <klib-macros.h>
#include <klib.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

typedef void (*OutputFunc)(char c, void *data);

static void reverse_str(char *start, int len) {
  char *end = start + len - 1;
  while (start < end) {
    char temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }
}

// 修复：分离有符号和无符号整数转换
static int itoa_signed(int num, char *buf, int base) {
  char *p = buf;
  unsigned int unum;

  if (num == 0) {
    *p++ = '0';
    *p = '\0';
    return 1;
  }

  // 修复：正确处理负数
  if (num < 0 && base == 10) {
    *p++ = '-';
    // 修复：避免溢出，正确转换为无符号数
    unum = (unsigned int)(-num);
  } else {
    unum = (unsigned int)num;
  }

  char *start_of_digits = p;
  while (unum > 0) {
    int digit = unum % base;
    *p++ = (digit < 10) ? ('0' + digit) : ('a' + digit - 10);
    unum /= base;
  }
  *p = '\0';

  reverse_str(start_of_digits, p - start_of_digits);
  return p - buf;
}

// 新增：专门处理无符号整数
static int utoa(unsigned int num, char *buf, int base) {
  char *p = buf;

  if (num == 0) {
    *p++ = '0';
    *p = '\0';
    return 1;
  }

  char *start_of_digits = p;
  while (num > 0) {
    int digit = num % base;
    *p++ = (digit < 10) ? ('0' + digit) : ('a' + digit - 10);
    num /= base;
  }
  *p = '\0';

  reverse_str(start_of_digits, p - start_of_digits);
  return p - buf;
}

// 修复：长整型转换
static int lltoa_signed(long long num, char *buf, int base) {
  char *p = buf;
  unsigned long long unum;

  if (num == 0) {
    *p++ = '0';
    *p = '\0';
    return 1;
  }

  if (num < 0 && base == 10) {
    *p++ = '-';
    unum = (unsigned long long)(-num);
  } else {
    unum = (unsigned long long)num;
  }

  char *start_of_digits = p;
  while (unum > 0) {
    int digit = unum % base;
    *p++ = (digit < 10) ? ('0' + digit) : ('a' + digit - 10);
    unum /= base;
  }
  *p = '\0';

  reverse_str(start_of_digits, p - start_of_digits);
  return p - buf;
}

static void format_core(const char *fmt, va_list args, OutputFunc out,
                        void *data) {
  for (const char *p = fmt; *p != '\0'; p++) {
    if (*p != '%') {
      out(*p, data);
      continue;
    }

    p++;

    bool is_long = false;
    if (*p == 'l') {
      is_long = true;
      p++;
    }

    switch (*p) {
    case 's': {
      const char *s = va_arg(args, const char *);
      if (s == NULL)
        s = "(null)";
      while (*s) {
        out(*s++, data);
      }
      break;
    }
    case 'd': {
      if (is_long) {
        long long num = va_arg(args, long long);
        char buf[64];
        lltoa_signed(num, buf, 10);
        for (char *q = buf; *q; q++) {
          out(*q, data);
        }
      } else {
        int num = va_arg(args, int);
        char buf[32];
        itoa_signed(num, buf, 10);
        for (char *q = buf; *q; q++) {
          out(*q, data);
        }
      }
      break;
    }
    case 'x': {
      // 修复：%x应该处理无符号整数
      unsigned int num = va_arg(args, unsigned int);
      char buf[32];
      utoa(num, buf, 16);
      for (char *q = buf; *q; q++) {
        out(*q, data);
      }
      break;
    }
    case 'u': {
      // 新增：支持%u无符号十进制
      if (is_long) {
        unsigned long long num = va_arg(args, unsigned long long);
        char buf[64];
        // 可以复用utoa逻辑，这里简化处理
        char *q = buf;
        if (num == 0) {
          *q++ = '0';
        } else {
          char *start = q;
          while (num > 0) {
            *q++ = '0' + (num % 10);
            num /= 10;
          }
          reverse_str(start, q - start);
        }
        *q = '\0';
        for (char *r = buf; *r; r++) {
          out(*r, data);
        }
      } else {
        unsigned int num = va_arg(args, unsigned int);
        char buf[32];
        utoa(num, buf, 10);
        for (char *q = buf; *q; q++) {
          out(*q, data);
        }
      }
      break;
    }
    case '%':
      out('%', data);
      break;
    default:
      out('%', data);
      if (is_long)
        out('l', data);
      out(*p, data);
      break;
    }
  }
}

void sprintf_out(char c, void *data) {
  char **buf = (char **)data;
  *(*buf)++ = c;
}

void printf_out(char c, void *data) { putch(c); }

int printf(const char *fmt, ...) {
  va_list args;
  va_start(args, fmt);
  format_core(fmt, args, printf_out, NULL);
  va_end(args);
  return 0;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *str, const char *fmt, ...) {
  va_list args;
  va_start(args, fmt);
  char *str_start = str;
  format_core(fmt, args, sprintf_out, &str);
  *str = '\0';
  va_end(args);
  return str - str_start;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif