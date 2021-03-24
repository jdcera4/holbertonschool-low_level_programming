#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - check the code for Holberton School students.
 *
 * @s: pointer 
 */
void puts_half(char *str)
{
	int i, n, j;

	for (i = 0; str[i] != '\0'; )
	{
		i++;
	}
	n = i / 2;
	printf("%d\n", n);
   
   for (j = n; j < i; j++)
   {
	   _putchar(str[j]);
   }

	_putchar('\n');
}