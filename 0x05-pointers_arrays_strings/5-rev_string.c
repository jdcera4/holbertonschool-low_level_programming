#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int c = 0, i, j;

	while (s[c] != '\0')
	{
		c++;
	}
	c--;
	for(i = 0; i < c; i++, c--)
	{
		j = s[i];
		s[i] = s[c];
		s[c] = j;
    }
}
