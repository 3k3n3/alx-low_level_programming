#include "lists.h"
/**
 * free_listint - free malloc to integer list
 * @head: head of list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
