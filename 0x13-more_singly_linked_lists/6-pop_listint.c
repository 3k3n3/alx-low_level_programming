#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of linked list
 *
 * Return: n = head node data or 0 if empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *next_node = NULL;

	if (*head == NULL)
		return (0);

	next_node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = next_node;

	return (n);
}
