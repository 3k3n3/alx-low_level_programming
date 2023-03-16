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
	unsigned int count = 0;
	char *p = s;

	while (*p)
	{
		char *a = accept;

		while (*a)
		{
			if (*a == *p)
			{
				count++;
				break;
			}
			a++;
		}

		if (*a == '\0')
			break;
		p++;
	}
	return (count);
}
