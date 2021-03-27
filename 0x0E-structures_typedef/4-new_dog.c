#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog- check the code for Holberton School students.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *dg;

	for (i = 0; name[i] != '\0'; )
	{
		i++;
	}
	for (j = 0; owner[j] != '\0'; )
	{
		j++;
	}
	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
	{
		free(dg);
		return (NULL);
	}
	dg->name = malloc(i++ * sizeof(dg->name));
	if (dg->name == NULL)
	{
		free(dg->name);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		dg->name[k] = name[k];
	}
	dg->age = age;
	dg->owner = malloc(i++ * sizeof(dg->owner));
	if (dg->owner == NULL)
	{
		free(dg->owner);
		return (NULL);
	}
	for (k = 0; k < j; k++)
	{
		dg->owner[k] = owner[k];
	}
	return (dg);
}
