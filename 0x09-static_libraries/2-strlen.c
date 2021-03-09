#include <stdio.h>

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
 * _strlen - returns the length of a string
 * @s: string to find length of
 *
 * Return: length of s
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		i++;
	}

	return (i);
}
