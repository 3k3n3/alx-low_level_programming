#include "main.h"

/**
 * create_array - creates an array of chars and initialize with a specific char
 * @size: unsigned int
 * @c: char
 *
 * Return: NULL or pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
