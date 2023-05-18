#include "lists.h"

/**
 * insert_dnodeint_at_index - insert n in dlinkedlist at index idx
 * @head: head of dlinkedlist
 * @idx: index of node
 * @n: integer
 *
 * Return: address of new node else null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
		unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *temp, *current;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		new_node->prev = NULL;

		if (*head !=  NULL)
			(*head)->prev = new_node;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	temp = current->next;
	current->next =	new_node;
	new_node->next = temp;
	new_node->prev = current;

	if (temp !=  NULL)
		temp->prev = new_node;

	return (new_node);
}
