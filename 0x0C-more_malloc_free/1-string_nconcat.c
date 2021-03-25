#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - concat
* @n: number
* @s1: an string
* @s2: an string
* Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  char *p;
    unsigned int i, j, l;

    if (s1 == NULL)
        s1 = "";

    if (s2 == NULL)
        s2 = "";

    for (i = 0; s1[i] != '\0'; i++)
    {
    }
    

    for (j = 0; s2[i] != '\0'; j++)
    {
    }
    

    if (n >= j)
        j = n;

    j += i;
    p = malloc(sizeof(char) * j + 1);

    if (!p)
    {
        return (NULL);
        printf("Error");
    }

    for (i = 0; s1[i] != '\0'; i++)
        p[i] = s1[i];

    for (l = 0; s2[l] != '\0' && l < n; l++, i++)
    {
        p[i] = s2[l];
    }

    p[i] = '\0';

    return (p);
}
