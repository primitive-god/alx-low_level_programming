#include "main.h"
/**
*main-a function that checks for lowercase character. 
*@c is the character been checked
*return 1 if lowercase,0 if otherwise
*/
int _islower(int c)
{
	if(c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
