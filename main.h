#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int _putchar(char c);
void _count(const char *fst, va_list args);

#endif
