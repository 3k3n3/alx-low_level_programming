#include "main.h"

/**
 * cap_string - capitalise first letter to uppercase
 * @s: string
 *
 * Return: char
 */
char *cap_string(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			if (s[i] == j &&
				(s[i - 1] == '{' || s[i - 1] == ' ' || s[i - 1] == '\n' ||
				s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
				s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
				s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '}' ||
				s[i - 1] == '\t'))
				s[i] = j - 32;
			if (s[i] == '\t')
				s[i] = ' ';
		}
	}
	return (s);
}
