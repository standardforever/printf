#include "main.h"

/**
 * long_val - it print a long value using putchar
 * @val: the value to be printed
 * @count: the count of the number the value should be 1
 * Return: count, the total number present
 */

int long_val(int val, int count)
{
	/* checks if the val is a negative number*/
	/* if yes print '-' */
	if (val < 0)
	{
		_putchar('-');
		val = val * -1;
	}

	if (val == 0)
		_putchar ('0');
	if (val / 10)
		count = 1 + long_val(val / 10, count);
	_putchar(val % 10 + '0');

	return (count);
}
