#include "main.h"

/**
 *
 *
 *
 */
void _puts_recursion(char *s)
{
	if (*s[0] == '\0')
	{
		_putchar('\n');
		return (0);
	}
	return (*s) + _puts_recursion(*s + 1);
}
