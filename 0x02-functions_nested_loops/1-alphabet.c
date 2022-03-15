#include "main.h"

/**
 * main - check the code
 * print the alphabet in lower case
 * Return: Always 0
 */
int main(void)
{
	int alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha ++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return 0;
}
