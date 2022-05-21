#include "main.h"

/**
 * _print - it print the strings base on the conditions
 * @format: it takes in a string as an argument
 * @args: it a list of variadic function
 * Return: 0;
 */
int _print(const char *format, va_list args)
{
	int i, j, count = 0;
	const char *s;

	if (*format != '\0')
	{
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			switch (format[i + 1])
			{
				case 'c':
					_putchar(va_arg(args, int));
					i++, count++;
					break;
				case 's':
					s = va_arg(args, const char *);
					for (j = 0; s[j]; j++, count++)
						_putchar(s[j]);
					i++;
					break;
				default:
					_putchar(format[i]);
					count++;
					break;
			}
		}
		else
			_putchar(format[i]), count++;
	}
	return (count);
	}
	else
		return (-1);
}