#include "main.h"

/**
 * print_rev - print in reverse
 * @s: string [CODE DOES NOT RUN CORRECTLY]
 * Return: void
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
