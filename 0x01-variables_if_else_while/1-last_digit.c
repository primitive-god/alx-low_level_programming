#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main-print if the string is greater than 5,0,and is less than 6 and not 0
*
*Returb: Always (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{	printf("last digit of %d is greater than 5\n", n);
	}
	else if (n == 0)
	{	printf("last digit of %d is 0\n", n);
	}
	else if (n < 6 && !0)
	{	printf("last digit of %d is less than 6 and not 0\n", n);
	}

	return (0);
}
