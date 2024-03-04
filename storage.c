#include "head.h"
/*
 *function storage container
 */
char *storage(int number)
{
  char *string = malloc(number * sizeof(char) - 1);
  return (string);
}
