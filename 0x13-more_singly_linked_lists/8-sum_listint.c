#include "lists.h"

/**
 * sum_listint - sum items in int list
 * @head: head of linkedlist
 *
 * Return: 0 or Sum
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *current = head;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		i += current->n;
		current = current->next;
	}
	return (i);
}
