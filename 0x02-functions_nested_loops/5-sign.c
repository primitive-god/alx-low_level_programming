#include "main.h"
/**
*main-a function that prints the sign of a number
*@n is the character been checked
*
*return 1 if n is greter than 0,0 if n is 0 and -1 if n is less than 0
*/
int print_sign(int n)
{
	if(n >0)
	{
		_putchar(43);
		return (1);
	}
	else if(n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else 
	{
		_putchar(0);
		return (0);
	}
}
