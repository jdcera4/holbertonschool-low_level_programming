#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/**
* malloc_checked - function malloc
* @b: variable espace memory
*
* Returns: punt
*
*/

void *malloc_checked(unsigned int b)
{
	int *punt;

	punt = malloc(b);

	if (punt == 0)
		exit(98);

	return (punt);
}
