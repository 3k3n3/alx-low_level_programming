#include "lists.h"

/**
 * add_dnodeint_end - add a new node to the end of list
 * @head: head
 * @n: data
 *
 * Return: address of the new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *head;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;

		current->next = new_node;
		new_node->prev = current;
	}
	return (new_node);
}
