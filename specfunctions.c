#include "main.h"
void printchar(va_list arguement)
{
  char character;
  character = va_arg(arguement, int);
  _putchar(character);
}

void printstring(va_list arguement)
{
  int num = 0;
  char *string = va_arg(arguement, char *);
  while (*string)
    {
      _putchar(string[num]);
      num++;
    }
}

void printmod(va_list arguement)
{
  char character;
  character = va_arg(arguement, int);
  _putchar(character);
}

void shrug(va_list arguement)
{
  (void) arguement;
  _putchar('?');
}
