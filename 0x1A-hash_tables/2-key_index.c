#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in the hash table array
 * @key: The key
 * @size: The size of the array
 * Return: The index at which the k/v pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	/* Calculate the hash value using the hash_djb2 function */
	hash_value = hash_djb2(key);

	/* Calc the index by performing a modulo operation w/ the array size */
	index = hash_value % size;

	return (index);
}
