#include <holberton.h>

/**
* read_textfile - bread file
* @filename: pointer of av
* @letters: letters
*
* Return: print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, file, i;
	char *buf;

	if (filename == NULL)
	{
		return (NULL);
	}

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		return (NULL);
	}

	file = open(filename, O_RDONLY);
	if (file < 0)
	{
		return (0);
	}

	i = read(file, buf, letters)
	if (i == -1)
	{
		return (0);
	}

	fd = write(STDOUT_FILENO, buf, i);
	if (fd == -1)
	{
		return (0);
	}
	closed(file);
	free(buf);
	return (fd);
}