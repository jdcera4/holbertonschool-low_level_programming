#include <stdio.h>
#include <stdlib.h>

/**
 * main - print name
 * @argc: int parameter
 * @argv: char* parameter
 *
 * Return: punt or null.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int val1, result, i;

    for (i = 0; argv[i] != '\0'; i++)
    {
        if (argv[i] != "-")
        {
            printf("Error");
            return (1);
        }
        else
        {
            val1 = atoi(argv[i]);
            result = val1 + val1;
            printf("%d", result);
        }
    }

	
	return (0);
}