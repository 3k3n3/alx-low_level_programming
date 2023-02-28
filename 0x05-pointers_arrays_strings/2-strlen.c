#include "main.h"

/**
 * _strlen - returns length if string
 * @s: string
 *
 * Return: _strlen
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++, s++)
		;
	return (i);
}
