#include "main.h"
#include <stdio.h>
/**
*main-function that prints n elements of an array
*of integers, followed by a new line.
*return void
*/
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(",");
	}
	}
	printf("\n");
}
