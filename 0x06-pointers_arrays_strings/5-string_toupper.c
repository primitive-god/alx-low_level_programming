#include "main.h"
/**
 *string_toupper -changes all lowercase letters
 *of a string to uppercase
 *@str - the string to be changed
 *Return :a pointer to the changed string
 */
char *string_toupper(char *str)
{
	int index = 0;
	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z' )
	str[index] -= 32;
	index++;
	}
	return (str);
}
