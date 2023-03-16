#include "main.h"

/**
 * array_range - creates array of int
 * @min: first number
 * @max: last number
 *
 * Return: 0, NULL or pointer
 */
int *array_range(int min, int max)
{
	int *a, i;

	if (min > max)
		return (NULL);

	a = malloc((max - min + 1) * sizeof(*a));
	if (a == NULL)
		return (NULL);

	i = 0;
	while (i <= (max - min))
	{
		a[i] = min + i;
		i++;
	}

	return (a);
}
