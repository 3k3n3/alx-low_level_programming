#include "main.h"

/**
 * print_alphabet_x10 - check the code
 * print the alphabet in lower case 10 times
 * Return: Always void
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int times;

	for (times = 1 ; times <= 10 ; times++)
	{
		for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
