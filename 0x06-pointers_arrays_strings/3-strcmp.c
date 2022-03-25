#include "main.h"

/**
 * _strcmp - compares 2 strings and returns 0
 * @s1: str 1
 * @s2: str 2
 * Return: 0 if equal or positive/negative number otherwise.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && s1[i] != '\0'; ++i)
		;
	return (s1[i] - s2[i]);
}
