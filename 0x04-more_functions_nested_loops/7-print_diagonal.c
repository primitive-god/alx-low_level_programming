#include "main.h"
/**
*main-draws a diagonal line in the terminal
*
*return void
*/
void print_diagonal(int n)
{	
	int i;
	int j;
	if (n <= 0)
	{	_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	for (j = 0;j < n; j++)
	{
		_putchar(' ');
	}
		
	_putchar('\\');
	_putchar('\n');
	}
	}
}
