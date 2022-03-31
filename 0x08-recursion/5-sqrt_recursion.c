#include "main.h"

int first_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number to calculate the square root of
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
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
