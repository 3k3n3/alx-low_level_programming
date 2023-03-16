#include "main.h"

/**
 * putchar2 - just print ',' and ' '
 *
 * Return: void
 */
void putchar2(void)
{
	_putchar(',');
	_putchar(' ');
}

/**
 * print_times_table - n times table
 * @n: integer
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n && n <= 15 && n >= 0; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i * j < 10)
				_putchar(i * j + '0');
			else if (i * j < 100)
			{
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			else if (i * j < 1000)
			{
				_putchar((i * j) / 100 + '0');
				_putchar(((i * j) / 10) % 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			putchar2();
			if (i * (j + 1) < 10)
				_putchar(' ');
			if (i * (j + 1) < 100)
				_putchar(' ');
		}
		if (i * j < 10)
			_putchar(i * j + '0');
		else if ((i * j) < 100)
		{
			_putchar((i * j) / 10 + '0');
			_putchar((i * j) % 10 + '0');
		}
		else
		{
			_putchar((i * j) / 100 + '0');
			_putchar(((i * j) / 10) % 10 + '0');
			_putchar((i * j) % 10 + '0');
		}
		_putchar('\n');
	}
}
