#include "main.h"

/**
 * puts_half - returns half string
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i,j,k;

	for (i = 0; *str != '\0'; i++, str++)
		;
	j = i/2;
	if (i % 2 != 0)
	{
		j++;
	}
	
	for (k = j; k < i; k++)
		_putchar(str[k]);
	_putchar('\n');
}
