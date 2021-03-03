#include "holberton.h"
/**
 * rot13 - codification
 * @str: string
 * Return: char
 *
*/
char *rot13(char *str)
{
	char *c;
	char *d;
	int i, j;

	c = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	d = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; j <= 52 ; j++)
		{
			if (str[i] == c[j])
			{
				str[i] = d[j];
				break;
			}
		}
	}
	return (str);
}
