#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int _strlen (char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);

	return (i);
}

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

char *argstostr(int ac, char **av)
{
	char *s;
	int lon, i;

	if (ac == 00 || av == 00)
	{
		return (NULL);
	}
	 for (i = 0; i < ac; i++)
	 {
		 lon = lon + _strlen(av[i] + 1);
	 }

	 s = malloc(lon * sizeof(char));

	 if (s == NULL)
	 {
		 return (NULL);
	 }

	 for (i = 0; i < ac; i++)
	 {
		 _strcpy(s, av[i]);
		 _strcpy(s, '\n');
	 }
	return (s);
}