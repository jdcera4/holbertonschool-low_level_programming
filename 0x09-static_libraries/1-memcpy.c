#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - prints buffer in hexa
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 * @n: variable cant
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *cde = dest;

	char *crc = src;

	unsigned int c;

	c = 0;

	while (c < n)
	{
		cde[c] = crc[c];
		c++;
	}
	return (cde);
}
