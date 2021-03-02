#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *punt;
	unsigned int o;

	if (size == 0)
		return (0);

	punt = malloc(size * sizeof(char));

	if (punt == 0)
		return (0);

	for (o = 0; o < size; o++)
		punt[o] = c;

	return (punt);
}
