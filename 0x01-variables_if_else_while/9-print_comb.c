#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print numbers
 * description: use while
 * Return: void
 */

int main(void)
{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		if (a < 57)
		{
			putchar(44);
			putchar(32);
		}
		a++;
	}
	putchar(10);
	return (0);

}
