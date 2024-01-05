#include "main.h"
/**
*main-writes a function that checks for an uppercase letter
*
*return 1 if c is uppercase
*/
int _isupper(int c)
{	
	if(c =='A' && c <= 'Z')
	{ 
		return (1);
	}
	return (0);
}
