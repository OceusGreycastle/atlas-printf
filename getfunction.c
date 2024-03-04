#include "head.h"
/*
 * getfunction - A function that grabs another function depending on conditions.
 */
void *getfunction(char character)
{
  int number = 0;
  struct spec[] = {
    {'c', printchar},
    {'s', printstring},
    {'%', printmod},
    {NULL, NULL}
  };
  while (number < 3){
    if (strcmp(spec[number].specifier, character) == 0)
      {
	return (spec[number].function);
      }
    else
      {
	number++;
      }
  }
  return (0);
}

