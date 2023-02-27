#include "main.h"

/**
 * swap_int - swap 2 integers throught their pointers
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
