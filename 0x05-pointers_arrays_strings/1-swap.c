#include "main.h"

/**
 * swap_int - swap 2 integers throught their pointers
 * @a: pointer to a
 * @b: pointer to b
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i, j;

	i = *b;
	j = *a;

	*b = j;
	*a = i;
}
