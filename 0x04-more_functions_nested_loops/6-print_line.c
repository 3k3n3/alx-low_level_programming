#include "main.h"

/**
 * print_line - print '_' n times
 * @n: number of times
 *
 * Return: void
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		x = 0;
		while (x != n)
		{
			_putchar('_');
			x++;
		}
		_putchar('\n');
	}
}
