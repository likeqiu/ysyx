#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

typedef void (*OutputFunc)(char c, void *data);
static int itoa(int num, char *buf,int base);

static void format_core(const char *fmt,va_list args,OutputFunc out,void *data)
{
  for (const char *p = fmt; *p != '\0';p++)
  {
    if(*p != '%')
    {
      out(*p, data);
      continue;
    }

      p++;
      switch (*p)
      {
      case 's':
      {
        const char *s = va_arg(args,const char *);
        if(s==NULL)
        {
          s = "(null)";
        }
          while (*s)
          {
            out(*s++, data);
          }
        break;
      }
        
          
      case 'd':
      {
        int num = va_arg(args, int);
        char buf[16];
        itoa(num, buf, 10);
        for (char *q = buf; *q;q++)
        {
          out(*q, data);
        }
        break;
      }

        case 'x':
        {
          int num = va_arg(args, int);
          char buf[16];
          itoa(num, buf, 16);
          for (char *q = buf; *q;q++)
          {
            out(*q, data);
          }
            break;
          }

          case '%':
            out('%', data);break;

          default:
            out(*p, data); break;
      }
    
  }
}

void sprintf_out(char c, void *data)
{
  char **buf = (char **)data;
  *(*buf)++ = c;
  // 使用 char ** 是为了在 sprintf_out() 中修改原指针的位置，从而支持连续写入字符。使用char *只在函数内部有效
}

void printf_out(char c, void *data)
{
  putch(c);
}

int printf(const char *fmt, ...)
{

  va_list args;
  va_start(args, fmt);

  format_core(fmt, args, printf_out,NULL );
  va_end(args);
  return 0;

  panic("Not implemented");
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

  panic("Not implemented");
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

static int itoa(int num,char *buf,int base)
{
  char *p = buf;
  char *p_start = buf;


  if(num < 0 && base==10)
  {

    num = -num;
    *p++ = '-';
  }

  if(num == 0)
  {
    *p++ = '0';
    *p = '\0';
    return p - p_start;
  }

  // 转换为字符串（逆序）
  while(num>0){
    int digit = num % base;
    *p++ = (digit < 10) ? ('0' + digit) : ('a' + digit - 10);
    num /= base;
  }

  *p-- = '\0';

  // 反转字符串
  char *p_end = p;
  while(p_start < p_end)
  {
    char temp = *p_start;
    *p_start++ = *p_end;
    *p_end-- = temp;
  }

  return p - buf;
}

#endif
