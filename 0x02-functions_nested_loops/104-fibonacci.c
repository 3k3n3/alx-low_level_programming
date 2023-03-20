#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	unsigned long long i, j, x;
	int c;

	printf("1, 2, ");
	i = 1;
	j = 2;
	c = 3;
	while (c <= 98)
	{
		x = i + j;
		if (c != 98)
			printf("%llu, ", x);
		if (c == 98)
			printf("%llu", x);
		i += 1;
		i = j;
		j = x;
		c++;
	}
	printf("\n");
	return (0);
}
