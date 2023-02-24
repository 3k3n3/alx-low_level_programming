#include "main.h"

/**
 * _isdigit - Checks if int c is a digit
 * @c: integer(ASCII)
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	int x;

	x = 48;
	while (x <= 57)
	{
		if (x == c)
			return (1);
		x++;
	}
	return (0);
}
