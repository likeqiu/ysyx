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

static int itoa(int num, char *buf, int base) {
  char *p = buf;
  unsigned int unum;

  if (num == 0) {
    *p++ = '0';
    *p = '\0';
    return 1;
  }

  if (num < 0 && base == 10) {
    *p++ = '-';
    unum = -num;
  } else {
    unum = num;
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

static int lltoa(long long num, char *buf, int base) {
  char *p = buf;
  unsigned long long unum;

  if (num == 0) {
    *p++ = '0';
    *p = '\0';
    return 1;
  }

  if (num < 0 && base == 10) {
    *p++ = '-';
    unum = -num;
  } else {
    unum = num;
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
        lltoa(num, buf, 10);
        for (char *q = buf; *q; q++) {
          out(*q, data);
        }
      } else {
        int num = va_arg(args, int);
        char buf[32];
        itoa(num, buf, 10);
        for (char *q = buf; *q; q++) {
          out(*q, data);
        }
      }
      break;
    }
    case 'x': {
      int num = va_arg(args, int);
      char buf[32];
      itoa(num, buf, 16);
      for (char *q = buf; *q; q++) {
        out(*q, data);
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