#include "main.h"

/**
 * putchar_long 
void putchar_long(long var) {

	/* print '-' for negative numbers */
	if (var < 0)
	{
		_putchar('-');
		var = var * -1;
	}
  
    /* Print Zero */
	if (var == 0)
		_putchar('0');
  
    /* First remove the last digit of number and print 
    the remaining digits using recursion, then print
    the last digit
 */
	if (var/10)
		_my_putchar(var/10);
  
	putchar(var%10 + '0');
}