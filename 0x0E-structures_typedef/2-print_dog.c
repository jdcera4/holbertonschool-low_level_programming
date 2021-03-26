#include <stdio.h>
#include "dog.h"

/**
 * print_dog- check the code for Holberton School students.
 * @d: pointer of structure
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
	char* p = NULL;

	if (!d)
	{
		printf("%s", p);
	}

	if (d)
	{
		if (!d->name)
		{
			printf("Name: %s", p);
		}
		printf("Name: %s\n Age: %.6f\n Owner: %s\n", d->name, d->age, d->owner);
	}
}
