#include "lists.h"

/**
 * sum_dlistint - sum items in int list
 * @head: head of double linkedlist
 *
 * Return: 0 or Sum of n
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		i += current->n;
		current = current->next;
	}
	return (i);
}
