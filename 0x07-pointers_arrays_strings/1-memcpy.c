#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: new string
 * @src: source string
 * @n: int
 *
 * Return: s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
