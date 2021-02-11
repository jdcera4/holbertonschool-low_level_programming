#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet_x10 - print x10 the alphabet function
 *
 */
void print_alphabet_x10(void)
{
	char i;
	int o;

	for (i = 1; i <= 10; i++)
	{
	for (o = 'a'; o <= 'z'; ++o)
	_putchar (o);
	}
	_putchar ('\n');
}
