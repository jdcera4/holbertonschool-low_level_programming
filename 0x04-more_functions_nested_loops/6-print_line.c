#include "holberton.h"

/**
 * print_line - print lin _
 * @n: the times fot 'n? to print
 * Return: 0
 */
void print_line(int n)
{
	int a;

	for (a = n; a > 0; a--)
	{
	_putchar('_');
	}
	_putchar('\n');
}
