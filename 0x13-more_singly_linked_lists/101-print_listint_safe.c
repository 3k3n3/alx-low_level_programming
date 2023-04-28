#include "lists.h"

/**
 * print_listint_safe - prints a linked list with loop
 * @head: head node
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *i = head, *j = head;
	size_t count = 0;

	while (i && j && j->next)
	{
		printf("[%p] %d\n", (void *)i, i->n);
		count++;

		i = i->next;
		j = j->next->next;

		if (i == j)
		{
			printf("[%p] %d\n", (void *)i, i->n);
			count++;
			printf("-> [%p] %d\n", (void *)j->next, j->next->n);
			count++;
			break;
		}
	}

	if (!j || !j || !j->next)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			count++;
			head = head->next;
		}
	}

	return (count);
}
