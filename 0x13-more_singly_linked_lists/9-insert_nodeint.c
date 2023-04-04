#include "lists.h"

/**
 * insert_nodeint_at_index - insert n in linkedlist at index idx
 * @head: head of linkedlist
 * @idx: index of node
 * @n: integer
 *
 * Return: address of new node else null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *temp, *current;

	current = *head;

	new_node = malloc(sizeof(listint_t));

	if (head == NULL || current == NULL)
		return (NULL);
		
	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (current->next != NULL)
	{
		if (i == (idx - 1))
		{
			temp = current->next;
			current->next = new_node;
			new_node->n = n;
			new_node->next = temp;
			return (new_node);
		}
		current = current->next;
		i++;
	}

	return (NULL);
}
