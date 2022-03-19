#include "main.h"

/**
 * print_diagonal - uses '\' to print diagonal lines
 * @n: int
 * Return: void
 */
void print_diagonal(int n)
{
	int c;

	do {
		_putchar('\n');
	} while (n <= 0);

	for (c = 0 ; c > n ; c++)
	{
		_putchar('\\');
	}
}

