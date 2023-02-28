#include "main.h"

/**
 * puts_half - returns half string
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, len, temp;

	for (i = 0; str[i] != '\0'; ++i)
		;

	temp = len = i;
	if (temp % 2 == 0)
		temp /= 2;
	else
		temp = (temp + 1) / 2;

	for (i = temp; i < len; ++i)
		_putchar(str[i]);
	_putchar('\n');
}
