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
	current = *head;
	if (*head == NULL || head == NULL || current == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; current->next != NULL; i++)
	{
		if (i == (idx - 1))
		{
			temp = current->next;
			current->next = new_node;
			new_node->n = n;
			new_node->next = temp;
			new_node->prev = current;
			return (new_node);
		}
		current = current->next;
	}
	if (i == (idx - 1))
	{
		current->next = new_node;
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = current;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
