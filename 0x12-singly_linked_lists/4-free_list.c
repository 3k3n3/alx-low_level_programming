#include "lists.h"

/**
 * free_list - free memory
 * @head; head of linkedlist
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
