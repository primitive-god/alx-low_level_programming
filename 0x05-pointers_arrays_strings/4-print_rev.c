#include "main.h"
#include <string.h>
/**
*main- a function that prints a string in reverse
*followed by a new line
*/
void print_rev(char *s)
{	int c = 0;	
	while (s[c] != '\0') 
	{
	c++;
	}
	for (c -= 1; c >= 1; c--)
	{
    	_putchar(s[c]); 
	}
	_putchar('\n');
}
