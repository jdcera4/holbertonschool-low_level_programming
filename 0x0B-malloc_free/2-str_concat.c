#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Function concat two strings.
 * @s1: string one
 * @s2: string two
 * Return: char pointer.
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, k, l, z;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		;
		i++;
	for (k = 0; s2[k]; k++)
		;
		k++;

	ptr = malloc((i + k - 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (l = 0; s1[l] != '\0'; l++)
	{
		ptr[l] = s1[l];
	}

	for (z = 0; s2[z] != '\0'; z++)
	{
		ptr[i - 1 + z] = s2[z];
	}

	return (ptr);
}
