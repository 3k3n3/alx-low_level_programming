#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head of list
 *
 * Return: pointer to head reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;

	return (*head);
}
