#include "main.h"

/**
 * print_numbers - prints numbers
 * @c: int
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
