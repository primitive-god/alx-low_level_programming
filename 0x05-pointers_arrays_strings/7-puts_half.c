#include "main.h"
/**
*puts_half-prints half of a string, followed by a new line
*@str is the string concerned
*return void
*/
void puts_half(char *str)
{	int k;
	int j = 0;

	while (str[j] != '\0')
	{
	j++;
	}
	if (j % 2 == 1)
	{
	k = (j - 1) / 2;
	k += 1;
	}
	else
	{
	k = j / 2;
	}
	for (; k < j; k++)
	{	_putchar(str[k]);
	}
		_putchar('\n');
}
