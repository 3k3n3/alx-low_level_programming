#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: array of char containing bits
 *
 * Return: converted decimal or 0 if not valid
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, temp;
	unsigned int add = 0;
	unsigned int mul = 1;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	i -= 1;
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] == '1')
		{
			temp = i - 1;
			for (; i > 0; i--)
				mul *= 2;
			i = temp;
			add += mul;
			mul = 1;
		}
		else if (b[j] == '0')
		{
			temp = i - 1;
			for (; i > 0; i--)
				mul *= 0;
			i = temp;
			add += mul;
			mul = 1;
		}
		else
			return (0);
	}
	if (b[j - 1] == '1')
		return (add);
	else
		return (add - 1);
}
