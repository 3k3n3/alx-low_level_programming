#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	c = 0;
	while (c < 10)
	{
		printf("%d", c);
		c++;
	}
	putchar('\n');
	return (0);
}
