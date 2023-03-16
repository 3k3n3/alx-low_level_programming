#include "main.h"

/**
 * _abs - compute absolute value of int
 * @i: integer
 *
 * Return: integer
 */
int _abs(int i)
{
	if (i < 0)
		i *= -1;
	return (i);
}
