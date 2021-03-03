#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	int x,z;
	char *punt;

	for (x = 0; str[x] !=00; x++)
		;

	punt = malloc(x * sizeof(char));

	if (punt == 0)
		return (0);

	for (z = 0; z <= x; z++)
		punt[z] = str[z];

	punt[z] = 00;
	return (punt);
}
