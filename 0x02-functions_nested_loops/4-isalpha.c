#include "main.h"

/**
 * _isalpha - Checks for alphabet
 * @c: character
 *
 * Return: 1 if alphabet else 0
 */
int _isalpha(int c)
{
	int i, j;

	i = 97;
	j = 65;
	while (i <= 122 && j <= 90)
	{
		if (i == c || j == c)
			return (1);
		i++;
		j++;
	}
	return (0);
}
