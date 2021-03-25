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
	int *i, j;

	if (min > max)
	{
		return (0);
	}

	i = malloc(min * max);
	
	if (!i)
	{
		return (NULL);
	}
	return (i);
}