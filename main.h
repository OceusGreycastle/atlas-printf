#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
typedef struct specifier
{
  char specifier;
  void (*funct)(va_list);
} spec;

int _printf(const char *format, ...);
int _putchar(char c);
char *storage(int number);
void (*getfunction(char specifier))(va_list);
void printchar(va_list);
void printstring(va_list);
void printmod(va_list);
void shrug(va_list);
int _strcmp(char a, char b);

#endif
