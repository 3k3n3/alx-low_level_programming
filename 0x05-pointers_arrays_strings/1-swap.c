#include "main.h"

/**
 * swap_int - swap value of and b
 * @a: int a
 * @b: int b
 * Return: swap
 */
void swap_int(int *a, int *b)
{
	int t = *a;

	*a = *b;
	*b = t;
}
