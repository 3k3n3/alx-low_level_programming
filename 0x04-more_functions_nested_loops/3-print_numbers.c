#include "main.h"

/**
 * print_numbers - print 0 - 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int x;

	x = 48;
	while (x <= 57)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
