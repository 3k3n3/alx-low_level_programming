#include "main.h"

/**
 * _strstr - gets the location of a subtring
 * @haystack: string
 * @needle: string
 *
 * Return: number of byes of s...
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '0')
		return (haystack);
	for (; haystack != 0; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		for (; *n != '\0' && *h == *n; h++, n++)
			;
		if (*n == '\0')
			return (haystack);
	}
	return (NULL);
}
