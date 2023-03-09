#include "main.h"

/**
 * _sqrt_recursion - find squareroot
 * @n: number
 *
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (first_sqrt_recursion(n, 0));
}

/**
 * first_sqrt_recursion - recurses to find the square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 * Return: square root
 */
int first_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (first_sqrt_recursion(n, i + 1));
}
