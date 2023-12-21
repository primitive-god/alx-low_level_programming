#include <stdio.h>
/**
*Main: prints all the numbers of base 16 in lowercase, followed by a new line.
*
*
*Return:Always 0;
*/
int main(void)
{
	int  c;
	char a;
	
	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar (a);
	}
	putchar ('\n');
return (0);
}
