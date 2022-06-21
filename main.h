#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>


typedef struct specifiers{
    char *op;
    int (*f)(va_list);
}specifiers;




int _putchar(char c);
int _char(va_list op);
int _printf(const char *format, ...);
int long_val(int val, int count);
int _int(va_list op);
int _percentage(va_list);

/* specifiers */
int (*get_func(char *s))(va_list op);

int get_print_func(char *s, va_list ap);


/* helper */
int _strlen(char *s);

#endif

