#include "main.h"

/**
 * _putchar - to print characters to the stdout
 * @c: the character to be printed
 * Return: write to stdout the character to be printed
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
