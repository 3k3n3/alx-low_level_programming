#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int i, j, x, c;

	printf("1, 2, ");
	i = 1;
	j = 2;
	while (c <= 50)
	{
		x = i + j;
		if (c != 50)
			printf("%d, ", x);
		if (c == 50)
			printf("%d", x);
		i += 1;
		i = j;
		j = x;
		c++;
	}
	printf("\n");
	return (0);
}
