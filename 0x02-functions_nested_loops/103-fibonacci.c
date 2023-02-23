#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	unsigned long i, j, x, c;

	i = 1;
	j = 2;
	c = 2;
	x = 0;
	while (x < 4000000)
	{
		x = i + j;
		if (x % 2 == 0)
			c += x;
		i += 1;
		i = j;
		j = x;
	}
	printf("%lu\n", c);
	return (0);
}
