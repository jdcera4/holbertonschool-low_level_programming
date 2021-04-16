#include "holberton.h"
/**
 * open_and_read - open a file and read the text inside of a file.
 * @file_from: pointer at first file.
 * @file_to: pointer at second file.
 */
void open_and_read(char *file_from, char *file_to)
{
	int op, clos1, clos2, op2, i;
	char buf[BUFSIZ];

	if (file_from != NULL)
	{
		op = open(file_from, O_RDONLY);
		if (op == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		op2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
		while ((i = read(op, buf, BUFSIZ)) > 0)
		{
			if (write(op2, buf, i) != i)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
				close(op2);
				exit(99);
			}
		}
		if (i < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		clos2 = close(op2);
		clos1 = close(op);
		if (clos1 == -1 || clos2 == -1)
		{
			if (clos1 == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %d", op);
				exit(100);
			}
			dprintf(STDERR_FILENO, "Error: Can't close fd %d", op2);
			exit(100);
		}
	}
}

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
