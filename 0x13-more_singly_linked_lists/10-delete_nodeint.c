#include "lists.h"

/**
 * delete_nodeint_at_index - delete node in linkedlist at index idx
 * @head: head of linkedlist
 * @index: index of node
 *
 * Return: 1 if success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *current, *temp;

	current = *head;
	if (*head == NULL)
		return (-1);

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current->next != NULL)
	{
		if (i == (index - 1))
		{
			temp = current->next;
			current->next = temp->next;
			free(temp);
			return (1);
		}
		current = current->next;
		i++;
	}

	return (-1);
}
