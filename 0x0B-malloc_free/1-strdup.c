#include "main.h"

/**
 * _strdup - copies string
 * @str: string
 *
 * Return: NULL or pointer
 */
char *_strdup(char *str)
{
	char *dup;
	int i, size;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;

	dup = malloc(size * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		dup[i] = str[i];

	return (dup);
}
