#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - check the code for Holberton School students.
 * @n: cantidad parameters
 * Return: Always 0.
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list ar;
	unsigned int i;
	int s;

	va_start(ar, n);
	s = 0;
	for (i = 0; i < n; i++)
		s += va_arg(ar, int);

	va_end(ar);
	return (s);
}
