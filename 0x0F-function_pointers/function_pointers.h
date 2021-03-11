#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stddef.h>

void print_name(char *name, void (*f)(char *));

void print_name_uppercase(char *name);

void print_name_as_is(char *name);

void array_iterator(int *array, size_t size, void (*action)(int));

#endif
