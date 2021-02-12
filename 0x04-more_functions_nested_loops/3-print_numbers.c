#include "holberton.h"
/**
 * print_numbers - prints 0123456789\n
 *
 * Return: void
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
	_putchar(a);
	}
	_putchar('\n');
}
