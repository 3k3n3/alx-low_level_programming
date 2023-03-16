#include "main.h"

/**
 * _strchr - locate char in a string
 * @s: string
 * @c: character
 *
 * Return: &c of first occurence or NULL
 */
char *_strchr(char *s, char c)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		;
	j = 0;
	while (j <= i)
	{
		if (s[j] == c)
		{
			return (&s[j]);
		}
		j++;
	}
	return (NULL);
}
