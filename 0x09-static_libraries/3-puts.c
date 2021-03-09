#include "holberton.h"

/**
 * _puts - puts
 * @str:The character to print
 *
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar (*str);
		str++;
	}
	_putchar ('\n');

}
