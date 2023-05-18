#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a double linked list
 * @head: head of linked list
 * @index: index of nth node
 *
 * Return: n = head node data or 0 if empty
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (NULL);
	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}

	return (current);
}
