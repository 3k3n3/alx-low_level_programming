#include "main.h"

/**
 * main - Entry point
 *
 * Return: void
 */
int main(void)
{
	int x, g;
	printf("1, 2, ");
	x = 1;
	while (x < 50)
	{
		g = x;
		printf("%d, ", x+g);
		x++;
	}
}
