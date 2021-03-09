#include <unistd.h>

/**
 * main - writes the character
 * Return: 0
 *
 */

int main(void)
{
	return (0);
}

/**
 * _putchar - writes the character
 * @c:The character to print
 * Return: on sucess 1
 * On error, -1 is returned, and errno is set appropriately.
 *
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
