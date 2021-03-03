#include "holberton.h"
/**
 * _strncat - Hello world
 * @dest: First variable
 * @src: second variable
 * @n: characters
 * Return: char
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
	}
	for (j = 0 ; src[j] != '\0' ; j++, ++i)
	{
		if (j < n)
		{
			dest[i] = src[j];
		}
	}
	dest[i] = 0;
	return (dest);
}
