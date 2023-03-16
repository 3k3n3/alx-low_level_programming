#include "main.h"

/**
 * print_square - print '#'
 * @size: number of times
 *
 * Return: void
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	else
	{
		x = 0;
		while (x != size)
		{
			y = 0;
			while (y < size)
			{
				_putchar('#');
				y++;
			}
			_putchar('\n');
			x++;
		}
	}
}
