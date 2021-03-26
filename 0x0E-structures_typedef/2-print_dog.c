#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
	if (!d)
	{
		printf("mil");
	}

	if (d)
	{
		if (!d->name)
		{
			printf("nil");
		}
		printf("Name: %s\n Age: %.6f\n Owner: %s\n", d->name, d->age, d->owner);
	}
}