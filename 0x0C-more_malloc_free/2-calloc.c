#include "main.h"

/**
 * _calloc - allocate memory for array
 * @nmemb: number of elements in array
 * @size: bytes size
 *
 * Return: 0, NULL or pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);

	a = malloc(nmemb * size * sizeof(*a));
	if (a == NULL)
		return (NULL);

	i = 0;
	while (i < (nmemb * size))
	{
		a[i] = 0;
		i++;
	}

	return (a);
}
