#include "holberton.h"

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
 * _strchr - print half char
 * @s: string
 * @c: half
 * Return: char or 0
 *
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return ('\0');
}
