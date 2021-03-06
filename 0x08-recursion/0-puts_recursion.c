#include "main.h"

/**
 * _puts_recursion - print a str with
 * @s: str
 * @*s: points to value of str s
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
		_puts_recursion(s + 1);
}
