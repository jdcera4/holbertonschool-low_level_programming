#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/**
* malloc_checked - funcion que asigna memoria con la funcion malloc
* @b: variable espace memory
*
* Return: 98 if is file
*/

void *malloc_checked(unsigned int b)
{
	int *punt;

	punt = malloc(b);

	if (punt == 0)
		exit(98);

	return (punt);
}
