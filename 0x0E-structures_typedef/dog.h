#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
/**
 * struct dog - check the code for Holberton School students.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */


typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
