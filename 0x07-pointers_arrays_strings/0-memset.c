#include <stdio.h>

/*
* _memset - the function print 0x01 95
* @s: variable puntero
* @b: content array
* @n:cantidad print
* Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *c = s;

	while (n > 0)
	{
		*c = b;
		c++;
		n--;
	}

	return (s);
}
