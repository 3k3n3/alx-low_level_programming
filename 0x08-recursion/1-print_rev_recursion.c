#include "main.h"

/**
 * _print_rev_recursion - pritn reverse
 * @s: str
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		return;
	}
	_putchar(*s);
		_print_rev_recursion(s + 1);
}
