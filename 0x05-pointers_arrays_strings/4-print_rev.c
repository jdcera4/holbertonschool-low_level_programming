#include "holberton.h"
/**
 * print_rev - print rev
 * @s:The character to print
 *
 */

void print_rev(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{

	}
	c--;

	for (; c >= 0; c--)
	{
		_putchar (s[c]);
	}
	_putchar (10);
}
