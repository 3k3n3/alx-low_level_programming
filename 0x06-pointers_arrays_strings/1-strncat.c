#include "main.h"

/**
 * _strncat - concatenate 2 strings
 * @dest: destination, add src
 * @src: string to be added
 * @n: max number of bytes
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (dest);
}
