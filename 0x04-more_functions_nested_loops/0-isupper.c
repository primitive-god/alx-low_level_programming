#include "main.h"

/**
*_isupper- checks for an uppercase letter
*@c is the number to be checked
*return 1 if c is uppercase and 0 if otherwise
*/
int _isupper(int c)
{	
	if (c >= 65 && c <= 90)
	{ 
	return (1);
	}
	return (0);
}
