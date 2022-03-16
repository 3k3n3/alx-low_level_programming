#include "main.h"

/**
 * print_last_digit - print the last digit in a number
 * Return : n
 */
int print_last_digit(int i)

{
	int n;

	if (i < 0)
	{
		i = -i;
	}
	n = i % 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');

	return (n);
}
