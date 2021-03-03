#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/**
 *main - Entry point and execute the alphabets
 *
 * Return: 0
 */

int main(void)
{
	char i;
	char a;

	for (i = 'a'; i <= 'z'; ++i)
		putchar(i);
	for (a = 'A'; a <= 'Z'; ++a)
		putchar(a);
	putchar('\n');
	return (0);
}
