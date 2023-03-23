#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: arrray of size 'size'
 * @size: size of array
 * @cmp: pointer to the funtion to be executed
 *
 * Return: index of first element that does not return 0 in cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (size <= 0)
		return (-1);

	count = 0;
	while (count < size)
	{
		if (cmp(array[count]) != 0)
			return (count);
		count++;
	}
	return (-1);
}
