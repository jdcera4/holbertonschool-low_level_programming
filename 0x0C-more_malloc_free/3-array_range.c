#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - prints buffer in hexa
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: i.
 */

int *array_range(int min, int max)
{
	int *k;
	int i, j;

	if (min > max)
	{
		return (0);
	}
	i = (max - min + 1);

	k = malloc(i * sizeof(int));

	if (!k)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		k[j] = min++;
	}
	return (k);
}
