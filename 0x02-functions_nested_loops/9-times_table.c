#include "main.h"

/**
 * times_table - 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((i * j) <= 9 && j != 9)
			{
				_putchar(i * j + '0');
				_putchar(',');
				_putchar(' ');
				if ((j + 1) * i < 10)
					_putchar(' ');
			}
			else if ((i * j) >= 9 && j != 9)
			{
				_putchar((i * j) / 10 + '0');
				_putchar(((i * j) % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			if (j == 9 && (j * i) > 10)
			{
				_putchar((i * j) /10 + '0');
				_putchar((i * j) %10 + '0');
			}
			else if (j == 9 && (j * i) < 10)
			{
				_putchar((i * j) + '0');
			}
		}
		_putchar('\n');
	}
}
