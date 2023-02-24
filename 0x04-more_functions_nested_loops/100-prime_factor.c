#include "main.h"

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	unsigned long n;
	int x;

	n = 612852475143;
	x = 2;

	while (n > 1)
	{
		if (n % x == 0)
			n /= x;
		else
			x++;
	}
	printf("%d\n",x);
	return (0);
}
