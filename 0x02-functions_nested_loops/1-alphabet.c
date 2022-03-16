#include "main.h"

/**
 * main - check the code
 * print the alphabet in lower case
 * Return: Always 0
 */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha ++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}	
