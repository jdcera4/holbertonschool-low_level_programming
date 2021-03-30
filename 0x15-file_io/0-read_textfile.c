#include "holberton.h"

/**
* read_textfile - bread file
* @filename: pointer of av
* @letters: letters
*
* Return: print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, file, print;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file < 0)
	{
		return (0);
	}

	fd = read(file, buf, letters);
	if (fd == -1)
	{
		return (0);
	}

	print = write(STDOUT_FILENO, buf, fd);
	if (print == -1)
	{
		return (0);
	}
	close(file);
	free(buf);
	return (fd);
}
