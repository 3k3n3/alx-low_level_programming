#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, C;

	c = 97;
	C = 65;
	while (c < 123)
	{
		putchar(c);
		c++;
	}
	while (C < 91)
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
