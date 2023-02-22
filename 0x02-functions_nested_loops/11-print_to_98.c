#include "main.h"

/**
 * print_to_98 - print from n to 98
 * @n: number
 *
 * Return: Void
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
		printf("%d\n", n);
}
