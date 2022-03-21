#include "main.h"
#include <string.h>

/**
 * _strlen - string length
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
	c++;
	s++;
	}
	return (c);
}
