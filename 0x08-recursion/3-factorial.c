#include "main.h"

/**
 * factorial - factorial
 * @n: number to be factorised
 * Return: factorial
 */
int factorial(int n)
{
	if(n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
