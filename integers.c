#include "main.h"

int long_val(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n > 9)
		long_val(n / 10);
	_putchar(n % 10 + '0');
	return(0);
}