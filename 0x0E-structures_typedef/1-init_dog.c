#include <stdio.h>
#include "dog.h"

/**
 * init_dog - check the code for Holberton School students.
 * @d: pointer of structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}


}
