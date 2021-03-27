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
	int i, a, k, m;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
	{
	}
	i++;
	dog->name = malloc(i * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (a = 0; owner[a] != '\0'; a++)
	{
	}
	a++;
	dog->owner = malloc(a * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		dog->name[k] = name[k];
	dog->age = age;
	for (m = 0; m < a; m++)
		dog->owner[m] = owner[m];
	return (dog);
}
