#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: some other string I guess
 *
 * Return: number of byes of s...
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, x, y;

	x = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				x++;
		}
	}
	y = i - x;
	return (y);
}
