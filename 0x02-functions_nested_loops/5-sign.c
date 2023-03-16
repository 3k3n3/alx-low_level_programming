#include "main.h"

/**
 * print_sign - Checks if number is greater than or less than 0
 * @n: number
 *
 * Return: 1 if lowercase else 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar(48);
	return (0);
}
