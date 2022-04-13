#include "function_pointers.h"

/**
 * array_iterator - loop through items in array
 * @array: the array
 * @size: size of the array
 * @action: action
 * Return: loop
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
