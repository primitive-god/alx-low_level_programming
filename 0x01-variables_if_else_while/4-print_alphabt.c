#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*Prints the alphabet in lowercase followed by a newline except q and e
*
*Return: Always 0
*/
int main(void)
{
	char c;

	for(c ='a'; c <= 'z'; c++)
	{
		if (c != 'q' && c !='e')
	{
		putchar(c);
	}
	}
		putchar('\n');

		return (0);
}
