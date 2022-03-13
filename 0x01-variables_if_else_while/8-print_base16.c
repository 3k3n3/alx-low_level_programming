#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int h;

	for (h = 0x0 ; h <= 0xf ; h++)
	{
		putchar(h);
	}

	putchar('\n');

	return (0);
}
