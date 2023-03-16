#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int c, d;

	c = 0;
	while (c < 10)
	{
		d = 97;
		while (d <= 122)
		{
			_putchar(d);
			d++;
		}
		_putchar('\n');
		c++;
	}
}
