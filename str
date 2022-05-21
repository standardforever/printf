#include "main.h"

/**
 * _count_str - it count the number of strings in a variadic function
 * @format: a pointer to a string to be counted
 * @arg: the variadic function
 * Return: returns the count of the string
 */

int _count_str(const char *format, va_list arg)
{
	int i, j, count = 0;
	char *str;

	for (i = 0; format[i]; i++)
	{	
		if (format[i] == '%')
		{
			switch(format[i + 1])
			{
				case 's':
					str = va_arg(arg, char *);
					for (j = 0; str[j]; j++, count++)
						;
					count++;
					break;
				case 'c':
					va_arg(arg, int);
					count -= 2;
					break;
				default:
					count++;
					break;
			}
		}
		else
			count++;
	}
	return (count);
}

/**
 * _alloc_mem - it allocate a memory 
 * @count: the amount of memory to be allocated
 * Return: a pointer to the allocated memory
 */

char *_alloc_mem(int count)
{
	char *str = malloc(count *sizeof(int));
	if (str == NULL)
		return ('\0');
	return (str);
}
/**
 * print - it print the alphabet pointed to by format using variadic function
 * @format: pointer to a variadic string
 * @f: pointer to a function of malloc
 * @count: the number of memory to be alllocated
 * Return: the printed string
 */
int print(const char *format, va_list arg, char *(*f)(int), int count)
{
	int i, j, k, count1;
	char *str;
	char *s;


	str = f(count);
	j = 0, count1 = 0;
	for (i = 0; format[i]; i++, j++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					str[j] = va_arg(arg, int);
					 i++;
					break;
				case 's':
					s = va_arg(arg, char *);
					for (k = 0; s[k]; k++, j++, count1++)
						str[j] = s[k];
					i++;
					break;
				default:
					str[j] = format[i];
					break;
			}
		}
		else
		{
			str[j] = format[i];
			count1++;
		}
	}
	return (write(1, str, count1));

}

/**
 * _printf - it is a prototype of printf function
 * @format: the formated string it use to print
 * Return: the printed outcome to stdout
 */

int _printf(const char *format, ...)
{
	int count2, print1;
	va_list arg;
	va_start(arg, format);

	count2 = _count_str(format, arg);
	va_start(arg, format);
	print1 = print(format, arg, _alloc_mem, count2);
	va_end(arg);
	return (print1);
}
