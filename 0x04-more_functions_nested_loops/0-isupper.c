#include "main.h"

/**
 * _isupper - Checks if int c is upper
 * @c: char as integer(ASCII)
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	int x;

	x = 65;
	while (x <= 90)
	{
		if (x == c)
			return (1);
		x++;
	}
	return (0);
}
