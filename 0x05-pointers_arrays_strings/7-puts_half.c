#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - check the code for Holberton School students.
 *
 * @str: pointer
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
	if (i % 2 != 0)
	{
		n = (i - 1) / 2;
		_putchar(str[n]);
	}
	else
	{
		for (j = n; j < i; j++)
		{
			_putchar(str[j]);
		}

	}
	_putchar('\n');
}
