#include "main.h"

/**
 * print_diagonal - uses '\' to print lines
 * @n: int
 * Return: void
 */
void print_diagonal(int n)
{
	int c;

	for (c = 0 ; c < n ; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

