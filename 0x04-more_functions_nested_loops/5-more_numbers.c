#include "holberton.h"

/**
 * more_numbers - prints 01234567891011121314\n x10
 *
 * Return: void
 */


void more_numbers(void)
{
	char a, b, x, i;

	for (i = 0; i < 10; i++)
	{
	for (x = 0; x <= 14; x++)
	{
	if (x < 10)
	b = x;
	else
	{
	a = x / 10;
	b = x % 10;
	_putchar('0' + a);
	}
	_putchar('0' + b);
	}
	_putchar('\n');
	}
}
