#include "main.h"
/**
*main-prints the numbers, from 0 to 9, followed by a new line.
*description: excluding 2 and 4
*return 0 to 9
*/
void print_most_numbers(void)
{
	int c;
	for (c = 0; c <=9; c++)
 	 
	if ( c == 2 || c == 4)
	{
	continue;
	}
	else
	{
          _putchar(c + '0');
        }
	 _putchar('\n');
  }

