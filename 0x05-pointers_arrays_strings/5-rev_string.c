#include "main.h"

/**
 * rev_string - returns string in reverse
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *end = s;
	char temp;

	if (s)
	{
		while (*end)
		{
			end++;
		}
		end--;
		while (s < end)
		{
			temp = *s;
			*s++ = *end;
			*end-- = temp;
		}
	}
}
