#include "main.h"
/**
*main-prints the last digit of a number
*return the value of the last digit
*/
int print_last_digit(int n)
{
	int last;
	last = n % 10;
	if (n < 0)
	{
		last = last * -1;
	}
	_putchar( last + '0');
	return (last);
}
