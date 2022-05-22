#include "main.h"

/**
 * percentage - it checks for percentage and the next character
 * @format: a pointer to a sting to be checked
 * Description: it checks for a percentage if the next character match the
 *		the printf standard it return success else fail.
 * Return: -1 if fail else 0
 */

int percentage(const char *format)
{
	int i;

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case '%':
					i++;
					break;
				case 's':
				case 'c':
				case 'd':
				case 'i':
					break;
				default:
					return (-1);
			}
		}
	}
	return (0);
}
