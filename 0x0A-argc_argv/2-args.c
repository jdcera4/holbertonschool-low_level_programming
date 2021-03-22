#include <stdio.h>

/**
 * main - print name
 * @argc: int parameter
 * @argv: char* parameter
 *
 * Return: punt or null.
 */

int main(int argc, char *argv[])
{
	int count;

	printf("%s\n", argv[0]);
		for (count = 1; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
