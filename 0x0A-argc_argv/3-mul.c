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
	int val1, val2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		val1 = atoi(argv[1]);
		val2 = atoi(argv[2]);
		result = val1 * val2;
		printf("%d\n", result);
	}
	return (0);
}
