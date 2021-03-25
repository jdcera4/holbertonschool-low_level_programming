#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: pointer.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (!p)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		p[i] = 0;
	}

	return (p);
}
