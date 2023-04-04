#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of linked list
 * @index: index of nth node
 *
 * Return: n = head node data or 0 if empty
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

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
