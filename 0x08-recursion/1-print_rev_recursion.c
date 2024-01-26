#include "main.h"
#include <stdio.h>
/**
 *main-print a string in reverse
 *return:always (0);
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{	return;
	}
	s++;
	 _print_rev_recursion(s);
	 s--;
	_putchar(*s);
}

