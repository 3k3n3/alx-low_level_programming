#include "main.h"

/**
 * _isupper: this code checks for upper case
 * @c: int
 * Return: Always 0
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
