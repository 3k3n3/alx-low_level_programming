#include "function_pointers.h"

/**
 * array_iterator - executes a function on array elements
 * @array: arrray of size 'size'
 * @size: size of array
 * @action: pointer to the funtion to be executed
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count;

	count = 0;
	if (array != NULL && action != NULL && size > 0)
	{
		while (count < size)
		{
			action(array[count]);
			count++;
		}
	}
}
