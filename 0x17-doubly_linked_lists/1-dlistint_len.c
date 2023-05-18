#include "lists.h"

/**
 * dlistint_len - returns number of elements in a disint_t list
 * @h: pointer to head
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	ssize_t i = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
