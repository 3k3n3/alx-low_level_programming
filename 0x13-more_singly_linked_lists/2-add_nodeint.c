#include "lists.h"

/**
 * add_nodeint - add int to begining of linkedlist
 * @head: pointer to pointer to head
 * @n: integer
 *
 * Return: NULL or address of head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
