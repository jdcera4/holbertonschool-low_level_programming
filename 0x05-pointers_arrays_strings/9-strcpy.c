#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - check the code for Holberton School students.
 * @str: a string
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

    for (i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    return (dest);
}
