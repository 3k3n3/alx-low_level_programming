#include "main.h"

/**
 * flip_bits - number of bits to be flipped to get n from m
 * @n: int 1
 * @m: int 2
 *
 * Return: Numbe rof bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	static char binary1[64];
	static char binary2[64];
	int x = 0;
	int y = 0;
	int z = 0;
	int count = 0;

	unsigned long int i = n ^ m;

	while (x < 64 && (n >> x) > 0)
		x++;
	while (y < x && z < x)
	{
		binary1[y] = ((n >> (x - y - 1)) & 1) ? '1' : '0';
		binary2[z] = ((m >> (x - z - 1)) & 1) ? '1' : '0';
		y++;
		z++;
	}
	binary1[y] = '\0';
	binary2[z] = '\0';

	for (x = 0; binary1[x] != '\0' && binary2[x] != '\0'; x++)
	{
		if (binary2[x] != binary1[x])
			count++;
	}
	return (count);
}
