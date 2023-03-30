#include "lists.h"

/**
 * add_node - add to begining of linkedlist
 * @head: pointer to pointer to head
 * @str: pointer to array of str
 *
 * Return: NULL or address of head
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_node;

	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;
	new_node->len = i;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
