#include "main.h"

/**
 * string_noncat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n number oof bytes
 *
 * Return: NULL or pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l, x, y;
	char *a;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}
	else
		i = 0;

	if (s2 != NULL)
	{
		for (j = 0; s2[j] != '\0'; j++);
	}
	else
		j = 0;
	
	l = j > n ? n : j;

	a = malloc((i + l + 1) * sizeof(*a));
	if (a == NULL)
		return (NULL);
	
	for (x = 0; x < i; x++)
		a[x] = s1[x];
	
	for (y = 0; y < l; x++, y++)
		a[x] = s2[y];

	a[x] = '\0';





	return (a);
}
