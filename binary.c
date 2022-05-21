#include "main.h"

/**
 * binary - it convert number to binary number
 * @n: the parameter to convert
 * Return: 0
 */
unsigned int binary(unsigned int n)
{
	if (n / 2)
		binary(n / 2);
	_putchar(n % 2 + '0');
	return (0);
}
