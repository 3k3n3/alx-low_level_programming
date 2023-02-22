#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;

	x = 0;
	y = 0;
	while (x < 1024)
	{
		if (x % 3 == 0 || x % 5 == 0)
			y += x;
		x++;
	}
	printf("%d\n", y);
}
