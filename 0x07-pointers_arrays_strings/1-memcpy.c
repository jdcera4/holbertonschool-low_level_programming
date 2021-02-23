#include "holberton.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
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