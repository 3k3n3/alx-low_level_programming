#include "main.h"

/**
 * print_diagsums - print sum of diagonals
 * @a: 2d array
 * @size: dimension or size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, x, y;

	x = 0;
	y = 0;
	for (i = 0; i < size; i++)
	{
		x += a[size * i + i];
		y += a[size * (i + 1) - (i + 1)];
	}
	printf("%d, %d\n", x, y);
}
