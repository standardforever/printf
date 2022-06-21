#include "main.h"

/**
 * get_func - it specifie the required function
 * @s: the selector
 * Return: a va_list
 */
int (*get_func(char *s))(va_list)
{
	specifiers specifier[] = {
		{"c", _int},
		{NULL, NULL}

	};

	int i;

	while (specifier[i].op)
	{
		if (specifier[i].op[0] == *s)
			return (specifier[i].f);
		i++;
	}
	return (NULL);
}
