#include "main.h"

/**
 * _puts - returns string
 * @str: string
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++, str++)
		_putchar(*str);
	_putchar('\n');
}
