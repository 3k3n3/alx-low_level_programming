#include "main.h"

/**
 * print_most_numbers - print 0 - 9 except 2, 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int x;

	x = 48;
	while (x <= 57)
	{
		if (x != 50 && x != 52)
			_putchar(x);
		x++;
	}
	_putchar('\n');
}
