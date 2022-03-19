#include "main.h"

/**
 * print_diagonal - uses '\' to print lines
 * @n: int
 * Return: void
 */
void print_diagonal(int n)
{
	int c;

	for (c = 0 ; c <= n ; c++)
	{
		_putchar('\n');
		for (b = 0 ; b > n ; c++)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
