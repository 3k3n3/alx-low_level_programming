#include "main.h"

/**
 * print_rev - returns string in reverse
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++, s++)
		;
	for (i -= 1; i >= -2 ; i--, s--)
		_putchar(*s);
	_putchar('\n');
}
