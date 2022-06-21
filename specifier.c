#include "main.h"

/**
 * _char - it print a char with printf function
 * @op: the va_list to be printed
 * Return: 1
 */

int _char(va_list op)
{
	char c;

	c = va_arg(op, int);
	_putchar(c);
	return (1);
}

/**
 * _int - it print an int  with printf function
 * @op: the va_list to be printed
 * Return: the total count of number present
 */

int _int(va_list op)
{
	int c, count = 1;

	c = va_arg(op, int);
	if (c > 9)
		count = long_val(c, 1);
	else
		_putchar(c + '0');
	return (count);
}

/**
 * _percentage - it print a percentage sign with printf function
 * @op: the va_list to be printed
 * Return: 1
 */

int _percentage(va_list op)
{
	_putchar('%');
	return (1);
}
