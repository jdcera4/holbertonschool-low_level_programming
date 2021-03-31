#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - check the code for Holberton School students.
 *
 * @d: pointer to structure
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}
		if (d->owner != NULL)
		{
			free(d->owner);
		}
	}
	free(d);
}
