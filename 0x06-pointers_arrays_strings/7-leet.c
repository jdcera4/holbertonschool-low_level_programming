#include "holberton.h"
/**
 * leet - convert
 * @str: string
 * Return: string
 *
*/
char *leet(char *str)
{
	int i, j;
	char *s;

	s = "aAeEoOtTlL4433007711";
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			if (str[i] == s[j])
			{
				str[i] = s[j + 10];
			}
		}
	}
	return (str);
}
