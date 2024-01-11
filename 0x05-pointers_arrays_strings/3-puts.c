#include "main.h"
#include <stdio.h>
/**
*main-a function that prints a string,
*followed by a new line, to stdout.
*return: always 0
*/
void _puts(char *str)
{	
	while (*str != '\0')
	{_putchar(*str);
	str++;
	}
	_putchar('\n');
}
