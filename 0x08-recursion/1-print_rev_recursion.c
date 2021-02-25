#include "holberton.h"

/**
 * _print_rev_recursion - puts
 * @s:The character to print
 *
 */

void _print_rev_recursion(char *s)


{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
	else
	{
		_putchar('\n');
	}

}
