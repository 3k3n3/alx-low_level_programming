#include "main.h"

/**
 * factorial - factorial
 * @n: number to be factorised
 * Return: factorial
 */
int factorial(int n)
{
	if(n == 0)
		return (0);
	return n * factorial(n - 1);
}
