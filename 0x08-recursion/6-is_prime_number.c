#include "main.h"

/**
 * is_prime_number - prime number?
 * @n: number
 *
 * Return: 1 if prime number else 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	return (prime_number(n, 3));
}

/**
 * prime_number - helper function
 * @n: number
 * @i: iterable
 *
 * Return: 0 or 1
 */
int prime_number(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (prime_number(n, i + 2));
}
