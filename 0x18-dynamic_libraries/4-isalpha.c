#include "holberton.h"
/**
 * _isalpha - Checks whether c is a lowercase letter
 * @c: letter to return
 * Return: void
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
