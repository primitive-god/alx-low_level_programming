#include <stdio.h>
#include <stdlib.h>
/**
 *Main- prints all possible combinations of single-digit numbers.
 *
 *
 *Return:Always 0;
 */
int main (void)
{
	int sd;

	for (sd = '0'; sd <= '9'; sd++)
{		putchar (sd);
	if (sd != '9')
{		putchar(',');
		putchar(' ');
}
}
putchar('\n');

return (0);
}
