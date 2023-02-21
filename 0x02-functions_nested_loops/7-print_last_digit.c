#include "main.h"

/**
 * print_last_digit - print last digit
 * @i: integer
 *
 * Return: integer
 */
int print_last_digit(int i)
{
	if (i < 0)
		i *= -1;
	i %= 10;
	return (i);
}
