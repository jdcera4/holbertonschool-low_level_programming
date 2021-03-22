#include <stdio.h>

/**
 * main - print name
 * @argc: int parameter
 * @argv: char* parameter
 *
 * Return: punt or null.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int count = 0;

	for (count = 1; count < argc; )
	{
		printf("%i\n", count);
		count++;
	}

	return (0);
}
