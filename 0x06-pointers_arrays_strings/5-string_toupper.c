#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @s: string
 *
 * Return: char
 */
char *string_toupper(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			if (j == s[i])
				s[i] = j - 32;
		}
	}
	return (s);
}
