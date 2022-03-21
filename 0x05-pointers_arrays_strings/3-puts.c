#include "main.h"
#include <stdio.h>

/**
 * _puts - print to stdout
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_puts(str);
		str++;
	}
}
