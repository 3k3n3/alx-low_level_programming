#include "main.h"

/**
 * more_numbers - print 0 - 14, 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int x, y;

	y = 1;
	while (y <= 10)
	{
		x = 0;
		while (x <= 15)
		{	if (x > 9)
				_putchar(1 + '0');
			_putchar((x % 10) + '0');
			x++;
		}
		y++;
		_putchar('\n');
	}
}
