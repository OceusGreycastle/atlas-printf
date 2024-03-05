#include "main.h"
/*
 * something?
 */
int _printf(const char *format, ...)
{
  int length = 0;
  char *string;
  va_list arguement;
  va_start(arguement, format);
  string = malloc(length * sizeof(char) - 1);
  if (string == NULL)
    {
      return (0);
    }
  while (*format != '\0')
    {
      string[length] = format[length];
      if (string[length] == '%')
	{
	  length++;
	  va_arg(arguement, int);
	  getfunction(string[length]);
	}
      else
	{
	  _putchar(string[length]);
	}
    }
  
  va_end(arguement);
      
  return (length);
}
