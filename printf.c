#include "head.h"
/*
 * something?
 */
int _printf(const char *format, ...)
{
  int num = 0;
  while (format != NULL)
    {
      _putchar(format[num]);
      num++;
    }
  return (0);
}
