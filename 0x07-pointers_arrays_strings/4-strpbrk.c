#include "main.h"

/**
 * _strpbrk - searches string for a set of bytes
 * @s: string
 * @accept: string
 *
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*a == *s)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
