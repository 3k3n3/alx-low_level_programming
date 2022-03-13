#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 success
 */
int main(void)
{
	int t, a, b;

	t = 100;
	a = (t/10) + '0';
	b = (t%10) + '0';
	
	printf("%d", a);
	printf("%d", b);

	putchar('\n');
	return (0);
}
