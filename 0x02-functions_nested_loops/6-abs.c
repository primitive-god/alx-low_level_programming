#include "main.h"
/**
*main- a function that computes the absolute value of an integer.
*
*return the absolute value of an integer or 0
*/
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;
		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
