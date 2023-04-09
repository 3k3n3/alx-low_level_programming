#include "main.h"

/**
 * bin_string - converts n to binary
 * @n: integer
 *
 * Return: binary of integer n as string/array of char
 */
char *bin_string(unsigned long int n)
{
	static char binary[64];
	int i = 0;
	int j = 0;

	while (i < 64 && (n >> i) > 0)
		i++;

	while (j < i)
	{
		binary[j] = ((n >> (i - j - 1)) & 1) ? '1' : '0';
		j++;
	}

	binary[i] = '\0';
	return (binary);
}

/**
 * get_bit - returns value of a bit at given index
 * @n: integer
 * @index: index
 *
 * Return: -1 if error or vale of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	char *binary = bin_string(n);
	int bit;
	unsigned int i = 0;

	while (binary[i] != '\0')
		i++;

	if (index >= i)
		return (-1);

	bit = (binary[i - 1 - index] == '1') ? 1 : 0;

	return (bit);
}
