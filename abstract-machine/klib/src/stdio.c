#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

static int itoa(int num, char *buf);

int printf(const char *fmt, ...)
{
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  va_list args;
  char *d = out;
  int count = 0;

  va_start(args, fmt);

  while(*fmt)
  {
    if(*fmt != '%')
    {
      *d++ = *fmt++;
      count++;
    }else{
      fmt++;
      if(*fmt=='s')
      {
        char *s = va_arg(args, char *);//指向char*类型参数
        while(*s)
        {
          *d++ = *s++;
          count++;
        }
        fmt++;
      }else if(*fmt=='d')
      {
        int num = va_arg(args, int);
        char temp[32];
        int len = itoa(num, temp);
        for (int i = 0; i < len;i++)
        {
          *d++ = temp[i];
          count++;
        }
        fmt++;
      }else{
        //还未支持的格式,直接写入"%
        *d++ = '%';
        count++;
      }
    }
  }
  *d = '\0';
  va_end(args);
  return count;
  panic("Not implemented");
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

static int itoa(int num,char *buf)
{
  char temp[32];
  int len = 0, i = 0;
  int is_negative = num < 0;

  if(is_negative)
  {
    num = -num;
  }

  if(num==0)
  {
    temp[i++] = '0';
  }

  while(num > 0)
  {
    temp[i++] = '0' + (num % 10);
    num /= 10;
  }

  if(is_negative)
  {
    temp[i++] = '-';
  }

  while(i>0)
  {
    buf[len++] = temp[--i];
  }
  buf[len] = '\0';
  return len;
}

#endif
