#include "main.h"

/**
 * _isupper - this code checks for upper case
 * @c: int
 * Return: 1 if upper and 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
