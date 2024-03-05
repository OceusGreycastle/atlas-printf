#include "main.h"
/*
 * getfunction - A function that grabs another function depending on specifier.
 */
void (*getfunction(char spe))(va_list)
{
  int number = 0;
  spec speca[] = {
    {'c', printchar},
    {'s', printstring},
    {'%', printmod},
    {'\0', shrug}
  };
  while (number < 3){
    if (_strcmp(spe, speca[number].specifier) == 0)
      {
	return (speca[number].funct);
      }
    else
      {
	number++;
      }
  }
  return (speca[number].funct);
}

int _strcmp(char a, char b)
{
  if (a == b)
    {
      return (0);
    }
  return (1);
}
