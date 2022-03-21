#include "main.h"

/**
 * print_rev - print in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{	
	int i, len, temp;
	char ptr[1000];

	for (i = 0, len = 0; s[i] != '\0'; ++i, ++len)
		;

	for (i = 0; i < len; ++i)
	{
		ptr[i] = s[i];
	}

	temp = len - 1;
	for (i = 0; i < len; ++i, --temp)
	{
		s[i] = ptr[temp];
	}
}
