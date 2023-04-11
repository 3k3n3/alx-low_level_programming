#include "main.h"

/**
 * get_endianness - checks if underlying architecture is big || little endian
 *
 * Return: value of first byte of *p
 *
 * Description: If the first byte of num is 1, it means that the
 * least significant byte (LSB) is stored at the lowest memory address,
 * which indicates that the system is little endian.
 * If the first byte of num is 0, it means that the Most SB is stored at
 * the lowest memory address, which indicates that the system is big endian.
 */
int get_endianness(void)
{
	unsigned int num = 2;
	char *p = (char *)&num;

	return ((int)(*p));
}
