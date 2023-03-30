#include "lists.h"

/**
 * list_len - length of linkedlist
 * @h: pointer to head of node
 *
 * Return: length of list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	const list_t *current = h;

	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
