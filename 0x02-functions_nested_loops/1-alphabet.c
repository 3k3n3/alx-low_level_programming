#include "main.h"

/**
 * main - check the code
 * print the alphabet in lower case
 * Return: void
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha ++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}	
