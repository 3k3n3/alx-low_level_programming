#include "main.h"

/**
 * clear_bit - set value of bit @index to 1
 * @n: pointer to n
 * @index: index
 *
 * Return: 1 if success else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)/* if the index is out of range */
		return (-1);

	*n &= ~(1ul << index);
	return (1);
}
