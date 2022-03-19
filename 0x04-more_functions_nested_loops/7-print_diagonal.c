#include "main.h"

/**
 * print_line - uses '\' to print diagonal lines
 * @n: int
 * Return: void
 */
void print_line(int n)
{
	int c;

	for (c = 0 ; c < n ; c++)
	{
		_putchar('\');
	}
	_putchar('\n');
}

