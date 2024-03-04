#ifndef HEAD_H
#define HEAD_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
typedef struct specifier
{
  void *getfuntion(char character);
  char *specifier;
} spec;

int _printf(const char *format, ...);
int _putchar(char c);
char *storage(int number);
void *getfunction(char character);
char printchar(char character);
char *printint(int number);
char printmod(char character);
char *printstring(char *string);

#endif
