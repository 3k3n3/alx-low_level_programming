#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: pointer to head of node
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	const list_t *current = h;

	while (current != NULL)
	{
		printf("[%d] %s\n", current->str != NULL ? current->len : 0,
				current->str != NULL ? current->str : "(nil)");
		i++;
		current = current->next;
	}
	return (i);
}
