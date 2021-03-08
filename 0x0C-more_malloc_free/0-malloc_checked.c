#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - function malloc
* @b: variable espace memory
* @punt: pointer
* Returns: punt
*
*/

void *malloc_checked(unsigned int b)
{
	int *punt;

	punt = malloc(b);

	if (!punt)
		return (98);

	return (punt);
}
