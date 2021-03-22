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
	int count = argc - 1;

	printf("%d\n", count);

	return (0);
}
