#include "main.h"
#include <stdio.h>
/**
*main- a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.
*
*return the sum of the mutiples of 3 and 5 below 1024(excluded)
*/
int main(void)
{
	int i = 0;
	int sum = 0;
		for (i == 0;i < 1024;i++)
	{
		if(i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("the sum of the mutiples of 3 or 5 below 1024 is: %d\n" , sum);
	return 0;
}
