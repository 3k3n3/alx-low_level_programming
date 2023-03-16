#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: integer
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b * sizeof(*a));
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
