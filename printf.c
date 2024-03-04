#include "head.h"
/*
 * something?
 */
int _printf(const char *format, ...)
{
  int length = 0, number = 0;
  va_start string;
  va_list(string, NULL);
  while (format[length] != '\0')
    {
      if (format[length] == '%')
	{
	  length++;
	  getfunction();
    }
  string = malloc(length * sizeof(char) - 1);
  if (string == NULL)
    {
      return (0);
    }
  
    
  return (length);
}
