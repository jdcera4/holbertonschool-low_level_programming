#include <stdio.h>
#include "holberton.h"

/**
 * main - entry point.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i <= 99)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
