#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: string to find length of
 *
 * Return: length of s
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		i++;
	}

	return (i);
}

/**
 * create_file - create file
 * @filename: pointer of av
 * @text_content: letters
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
	int oupen, print;

	if (filename == NULL)
	{
		return (0);
	}

	oupen = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (oupen == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		print = write(oupen, text_content, _strlen(text_content));
		if (print == -1)
		{
			return (-1);
		}
	}

	return (1);
}
