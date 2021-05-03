#include "holberton.h"

/**
 * main - entry point.
 * @argc: the number of command line arguments.
 * @argv: An array of size argc.
 * Return: Always 0 (Success).
 */
int main(int argc, char **argv)
{

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	open_and_read(argv[1], argv[2]);
	return (0);
}