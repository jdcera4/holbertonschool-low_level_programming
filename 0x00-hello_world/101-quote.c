#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	char a[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i = 0;

	for (i = 0; a[i] != '\0'; i++)
	{
		putchar (a[i]);
	}
	putchar('\n');
	return (0);
}
