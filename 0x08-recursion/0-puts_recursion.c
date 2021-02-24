#include "holberton.h"

/**
 * _puts_recursion - puts
 * @s:The character to print
 *
 */

void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar (*s);
		s++;
	}
	_putchar ('\n');

}
