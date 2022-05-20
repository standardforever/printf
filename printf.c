#include "main.h"

/**
 * _alloc_mem - it allocate a memory using malloc
 * @count: the total of of count of the parametr.
 * Return: pointer to the allocated memory
 */

char *_alloc_mem(int count)
{
	char *str = malloc(count * sizeof(int));

	if (str == NULL)
		return ('\0');
	return (str);
}

/**
 * _count - it count the total nubmers of character given
 * @format: is a pointer that point to the string to be counted
 * @args: it takes va_list of
 * Return: an int of the count
 */
/*int _count(const char *format, va_list args)
{

	int state = 0, count = 0;

	const char *s;
	while (*format)
	{
		if (state == 0)
		{
			if (*format == '%')
				state = 1;
		}
		else if (state == 1)
		{
			switch(*format)
			{
				case 'c':
					count--;
					break;
				case 's':
					//s = va_arg(args, const char *);
					//while (*s)
					//	*s++, count++;
					break;
			}
		}
		else
			count++;
		format++;
	}


	int i, j, count = 0;
	const char *s;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == 'c')
			count++, i++;
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			s = va_arg(args, const char *);
			printf("%s", s);
			j = 0;
			//while (s[j])
			//	count++, j++;
			i++;
		}
		else
			count++;
	}
	return (count++);
}*/
/**
 * _printf - it print an input
 * @format: it's a pointer to a string
 * Description:  it takes a string and check if it sees '%s' or '%c, if yes
 *               it takes the matched argumetn from arg_list and print it.
 * Return: it returns the string pointered to by format.
 */

int _printf(const char *format, ...)
{
	int i = 0, k = 0, j, count;
	const char *s;
	char *str;
	va_list arg;

	str = _alloc_mem(100);
	va_start(arg, format), count = 0;
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1] == '\0')
		{
			str[k] = format[i];
			k++, count++;
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			str[k] = va_arg(arg, int);
			i++, k++, count++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			s = va_arg(arg, const char *);
			while (s[j])
			{
				str[k] = s[j];
				 k++, j++, count++;
			}
			k++, i++, count++, j = 0;
		}
		else
		{
			str[k] = format[i];
			 count++, k++;
		}
	}
	va_end(arg);
	return (write(1, str, count));
}
