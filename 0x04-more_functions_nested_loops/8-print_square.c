#include "holberton.h"

/**
 * print_diagonal - prints diagonal line
 * @n: prints lines
 * Return: 0
 */
void print_square(int size)
{
  int a;
  int b;

  if (size > 0 )
    {
      for (a = 1; a <= size; a++)
	{
	  for (b = 1; b < a; b++)
	  _putchar('#');
    _putchar('\n');
	}
    }
  else
    _putchar('\n');
}
