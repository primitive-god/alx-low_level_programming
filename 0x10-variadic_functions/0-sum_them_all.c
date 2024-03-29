#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * main-returns the sum of all it's parameters
 *
 * Return: if (n == 0)-0
 */
int sum_them_all(const unsigned int n, ...)
{	
	va_list ap;
	unsigned int i, sum = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}

