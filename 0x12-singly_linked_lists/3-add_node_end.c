#include "lists.h"

/**
 * add_node_end - add to end of linkedlist
 * @head: pointer to pointer to head
 * @str: pointer to array of str
 *
 * Return: NULL or address of head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_node;
	list_t *current;


	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->next = NULL;

	while (str[i] != '\0')
		i++;
	new_node->len = i;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new_node;

	return (new_node);
}
