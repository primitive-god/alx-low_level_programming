#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 *Main-function that concatenates two strings
 *@dest:the string to be appended upon
 *@src:the string to be appended to dest
 *@n:the number of bytes rom src to be appended to dest
 *Return:A pointer to the resulting string dest 
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;
	while (dest [index++])
	dest_len++;
	for (index = 0; src[index] && index < n;index++)
	dest[dest_len++] = src[index];
	return (dest);
}
