#include "head.h"
/*
 * getfunction - A function that grabs another function depending on conditions.
 */
void *getfunction(char character)
{
  struct spec[] = {
    {'c', printchar},
    {'s', printstring},
    {'%', printmod},
    {NULL, NULL}
  }
