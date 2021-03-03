#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - check the code for Holberton School students.
 * @str: pointer
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	int x = 0, z;
	char *punt;

	if (str == NULL)
		return (NULL);

	while (str[x] != 00)
		x++;

	punt = malloc(sizeof(char) * (x + 1));

	if (punt == 0)
		return (0);

	for (z = 0; z <= x; z++)
		punt[z] = str[z];

	return (punt);
}
