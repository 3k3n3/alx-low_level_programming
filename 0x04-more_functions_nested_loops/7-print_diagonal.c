#include "main.h"

/**
 * print_diagonal - uses '\' to print lines
 * @n: int
 * Return: void
 */
void print_diagonal(int n)
{
	int count = 0, size;

	if (n > 0)
	{
		while (count < n)
		{
			for (size = 0; size < count; size++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			count++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
