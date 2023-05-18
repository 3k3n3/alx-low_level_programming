#include "lists.h"

/**
 * add_dnodeint - add a new node at begininng of dlistint_t
 * @head: head of list
 * @n: data
 *
 * Return: pointer/address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
