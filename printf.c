#include "main.h"

/**
 * _printf - it print anything
 * @format: the string to be printed
 * Return: integer
 */

int _printf(const char *format, ...)
{
	char c;
	char const *str;
	int i, j;
	va_list args;

	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			switch (format[i + 1])
			{
				case 'c':
					c = va_arg(args, int);
					write(1, &c, 1);
					i++;
					break;
				case 's':
					str = va_arg(args, const char *);
					for (j = 0; str[j]; j++)
						;
					write(1, str, j);
					i++;
					break;
				default:
					write(1, &format[i], 1);
			}
		}
		else
			write(1, &format[i], 1);
	}
	va_end(args);
	return (0);
}
