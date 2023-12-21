#include <stdio.h>
/**
*Main- prints all single digit numbers of base 10 starting from 0, followed by a new line.
*
*Return:always 0;
*/
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	putchar('\n');
return (0);
}
