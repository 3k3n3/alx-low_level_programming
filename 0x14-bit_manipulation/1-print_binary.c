#include "main.h"

/**
 * print_binary - prints binary of a number
 * @n: number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;
	int zeros = 0;/*leading zeros*/

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			zeros = 1;
		}
		else if (zeros)
			_putchar('0');
	}
}
