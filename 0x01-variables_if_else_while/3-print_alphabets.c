#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*Main- prints the alphabet in lowercase, and then in uppercase, followed by a new line.
*
*
*Return :Always (0);
*/
int main(void)
{
	char c;
	char C;

	for (c ='a'; c <= 'z'; c++)
		{
			putchar(c);
		}
	for (C ='A'; C <='Z'; C++)
		{
			putchar(C);
		}
			putchar('\n');
	return (0);
}
