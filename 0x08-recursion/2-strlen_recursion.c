#include "main.h"
#include <string.h>
/**
 *main returns the length of a string
 *return: integer value
 */
int _strlen_recursion(char *s)
{	if (*s == '\0')
	{	return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}

