#include "main.h"

/**
 * print_rev - print in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	char *r = s;
	while (*(r + 1) != '\0')
		r++;
	while (r > s)
	{
		char tmp = *r;
		*r-- = *s;
		*s++ = tmp;
	}
	_putchar('\n');
}
