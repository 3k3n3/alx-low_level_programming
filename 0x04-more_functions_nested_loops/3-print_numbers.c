#include "main.h"

/**
 * print_number - prints numbers
 * @c: int
 * Return: void
 */
void print_numbers(void);
{
	int c;

	for (c = '0' ; c <= '9' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

	return (c);
}
