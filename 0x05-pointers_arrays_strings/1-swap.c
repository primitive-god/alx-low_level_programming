#include "main.h"
/**
*main-a function that swaps the values of two integers
*Return: Always 0.
*/
void swap_int(int *a, int *b)
{	
	int temp = *a;
	*a = *b;
	*b = temp;
}

