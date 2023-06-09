#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table to add or update the key/value to
 * @key: The key (cannot be an empty string)
 * @value: The value associated with the key (can be an empty string)
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	/* Calculate the index using the key_index function */
	index = key_index((unsigned char *)key, ht->size);

	/* Check if the key already exists at the calculated index */
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		/* If the key already exists, update the value and return */
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value); /* Free the old value */
			current_node->value = strdup(value);
			/* Duplicate and set the new value */
			return (1);
		}
		current_node = current_node->next;
	}

	/* If no collision occurs, create a new node for the k/v pair */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	/* Set the key and value of the new node */
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	/* Handle collision by adding new node at beginning of linkedlist */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
