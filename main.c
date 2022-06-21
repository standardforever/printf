#include "main.h"

/**
 * _printf - prototype of printf function
 * @format: the formated string to print
 * Return: the total number of string passed
 */

int _printf(const char *format, ...)
{
	int len, i, count = 0;
	va_list op;

	va_start(op, format);
	if (!format || (format[0] == '%' && !format[i]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1])
		{
			switch (format[i + 1])
			{
			case 'c':
				count += _char(op);
				break;
			case 'i':
				count += _int(op);
				break;
			case '%':
				count += _percentage(op);
				break;

			default:
				_putchar(format[i]);
				_putchar(format[i + 1]);
				count += 2;
				break;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(op);
	return (count);
}
