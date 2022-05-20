#include "main.h"

int _count_str(const char *format, va_list arg)
{
	int i, j, count = 0, state = 0;
	char *str;

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			switch(format[i])
			{
				case 's':
					str = va_arg(arg, char *);
					for (j = 0; str[j]; j++, count++)
						;
					count -= 2;
					break;
				case 'c':
					va_arg(arg, int);
					count--;
					break;
				default:
					break;
			}
		}
		count++;
	}
	printf("%i", count);
	return (count);
}


char *_alloc_mem(int count)
{
	char *str = malloc(count *sizeof(int));
	if (str == NULL)
		return ('\0');
	return (str);
}

int print(const char *format, va_list arg)
{
	int i, j, k, count = 0, count1;
	char *str;
	char *s;

	count = _count_str(format, arg);
	str = _alloc_mem(count);
	j = 0, count1 = 0;
	for (i = 0; format[i]; i++, j++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					str[j] = va_arg(arg, int);
					count1++;
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
					count1++;
					break;

			}
		}
		else
		{
			str[j] = format[i];
			count1++;
		}
	}
	printf("\n%i",count1);
	return (write(1, str, count1));

}
int _printf(const char *format, ...)
{
	int count2;
	va_list arg;
	va_start(arg, format);

	count2 = print(format, arg);
	va_end(arg);
	return (count2);
}
