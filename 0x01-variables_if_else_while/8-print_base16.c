#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, x;

	c = 48;
	x = 97;
	while (c < 58)
	{
		putchar(c);
		c++;
	}
	while (x < 103)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
