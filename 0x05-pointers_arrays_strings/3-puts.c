#include <unistd.h>
/**
 * _putchar - writes the character
 * @c:The character to print
 * Return: on sucess 1
 * On error, -1 is returned, and errno is set appropriately.
 *
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
