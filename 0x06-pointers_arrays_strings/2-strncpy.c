#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination, add src
 * @src: string to be added
 * @n: max number of bytes
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	for (; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
