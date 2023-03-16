#include "main.h"

/**
 * print_diagonal - print '\'
 * @n: number of times
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');
	else
	{
		x = 0;
		while (x != n)
		{
			y = 0;
			while (y < x)
			{
				_putchar(' ');
				y++;
			}
			_putchar('\\');
			_putchar('\n');
			x++;
		}
	}
}
