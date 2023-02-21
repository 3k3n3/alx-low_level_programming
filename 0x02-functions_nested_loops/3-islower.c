#include "main.h"

/**
 * _islower - Checks for lowercase
 *
 * Return: 1 if lowercase else 0
 */
int _islower(int c)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		if (i == c)
			return 1;
		i++;
	}
	return 0;
}
