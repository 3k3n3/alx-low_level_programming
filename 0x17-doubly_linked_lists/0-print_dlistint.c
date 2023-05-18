#include "lists.h"

/**
 * print_dlistint - prints all elements of a disint_t list
 * @h: pointer to head
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	ssize_t i = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		i++;
		current = current->next;
	}
	return (i);
}
