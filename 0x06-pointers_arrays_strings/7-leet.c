#include "main.h"

/**
 * leet - !elite stuff, replace AaEeOoTtLl with 43071 respectively
 * @s: string
 *
 * Return: char
 */
char *leet(char *s)
{
	int i, j;

	char x[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char y[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == x[j])
				s[i] = y[j];
		}
	}
	return (s);
}
