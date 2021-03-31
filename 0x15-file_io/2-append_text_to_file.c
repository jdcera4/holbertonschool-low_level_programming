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
 * append_text_to_file - create file
 * @filename: pointer of av
 * @text_content: letters
 * Return: Always 0.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int oupen, print, lon;

	if (filename == NULL)
	{
		return (-1);
	}

	oupen = open(filename, O_APPEND | O_WRONLY);
	if (oupen == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		lon = _strlen(text_content);
	}
	else
	{
		return (1);
	}

	print = write(oupen, text_content, lon);
	if (print == -1)
	{
		return (-1);
	}
	close(oupen);
	return (1);
}
