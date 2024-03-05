#include "main.h"
/*
 * getfunction - A function that grabs another function depending on specifier.
 */
void (*getfunction(char *spe))(va_list)
{
  int number = 0;
  spec spec[] = {
    {'c', printchar},
    {'s', printstring},
    {'%', printmod},
    {'\0', shrug}
  };
  while (number < 3){
    if (strcmp(spec[number].specifier, spe) == 0)
      {
	return (spec[number].funct);
      }
    else
      {
	number++;
      }
  }
  return (spec[number].funct);
}
