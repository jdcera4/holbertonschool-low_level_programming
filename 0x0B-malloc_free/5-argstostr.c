#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - check the code for Holberton School students.
 * @s: pointer
 * Return: int i.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	return (i);
}

/**
 * _strcpy - check the code for Holberton School students.
 * @dest: pointer
 * @src: pointer
 * Return: int i.
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	for (; src[i] != '\0';)
	{
		i++;
	}

	for (; src[j] != '\0';)
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * argstostr - check the code for Holberton School students.
 * @ac: pointer
 * @av: pointer
 * Return: int i.
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int lon;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		lon = lon + _strlen(av[i]) + 1;
	}

	s = malloc(lon * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		_strcpy(s, av[i]);
		_strcpy(s, "\n");
	}
	return (s);
}
