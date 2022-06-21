#include "main.h"

/**
 * _strlen - it calculate the length of a string
 * @s: the length of string to be calculated
 * Return: length of the string on success else -1
 */

int _strlen(char *s)
{
	int len = 0;
	int i;

	if (s == NULL)
	{
		for (i = 0; i < s[i]; i++)
			len += 1;
		return (len);
	}
	return (-1);
}
