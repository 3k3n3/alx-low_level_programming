#include "lists.h"

/**
 * print_listint - print items in list of int
 * @h: head of list
 *
 * Return: number of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		i++;
		current = current->next;
	}
	return (i);
}
