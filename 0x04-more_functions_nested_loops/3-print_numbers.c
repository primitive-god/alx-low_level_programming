#include "main.h"
/**
*main-prints the numbers, from 0 to 9, followed by a new line.
*
*return:always 0
*/
void print_numbers(void)
{
	int c;
	for (c = 0; c < 10; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
