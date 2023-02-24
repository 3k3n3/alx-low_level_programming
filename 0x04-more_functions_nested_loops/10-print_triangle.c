#include "main.h"

/**
 * print_triangle - print '#'
 * @size: number of times
 *
 * Return: void
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
		_putchar('\n');
	else
	{
		x = 0;
		while (x != size)
		{
			y = 1;
			z = 0;
			while (y < (size - x))
			{
				_putchar(' ');
				y++;
			}
			while (z <= x)
			{
				_putchar('#');
				z++;
			}
			x++;
			_putchar('\n');
		}
	}
}
