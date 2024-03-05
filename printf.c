#include "main.h"
/*
 * something?
 */
int _printf(const char *format, ...)
{
  int length = 0;
  va_list arguement;
  va_start(arguement, format);
  while (format[length] != '\0')
    {
      if (format[length] == '%')
	{
	  length++;
	  getfunction(format)(arguement);
	}
      else
	{
	  _putchar(format[length]);
	}
      length++;
    }
  va_end arguement;
      
  return (length);
}
