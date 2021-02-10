#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet - printe alphabet
 *
 */

void print_alphabet(void)
{
  char i;

  for (i = 'a'; i <= 'z'; ++i)
    _putchar (i);
  _putchar ('\n');
}
