#include "holberton.h"
/**
 * jack_bauer - o'clock
 * Description: 00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
	int a, b;
	int c, d, e, f;

	for (a = 0 ; a < 24 ; a++)
	{
		c = a / 10 + '0';
		d = a % 10 + '0';
		for (b = 0 ; b < 60 ; b++)
		{
			e = b / 10 + '0';
			f = b % 10 + '0';
			_putchar(c);
			_putchar(d);
			_putchar(58);
			_putchar(e);
			_putchar(f);
			_putchar(10);
		}
	}
}
