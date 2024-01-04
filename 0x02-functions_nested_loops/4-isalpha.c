#include "main.h"
/**
*main- a function that checks for alphabetic character
*@c is the character to be checked
*return 1 if it is a letter,lowercase or uppercase.
*return 0 if otherwise
*/
int _isalpha(int c)
{
	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
		return (0);
}
