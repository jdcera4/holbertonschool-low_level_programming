#include <stdio.h>

/**
 * swap_int - swaps the
 * @a: first int to swap
 * @b: second int to swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int e;

	e = *a;
	*a = *b;
	*b = e;
}
