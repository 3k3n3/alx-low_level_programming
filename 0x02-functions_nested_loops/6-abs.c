#include "main.h"

/**
 *  _abs - absolute value of an integer, always positive
 *
 *  Return : integer
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
