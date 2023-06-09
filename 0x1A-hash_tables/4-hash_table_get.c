#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key from the hash table
 * @ht: The hash table to look into
 * @key: The key to search for
 * Return: The value associated with the key, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* Calculate the index using the key_index function */
	index = key_index((unsigned char *)key, ht->size);

	/* Traverse the linked list at the calculated index */
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		/* If the key is found, return the associated value */
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);

		current_node = current_node->next;
	}

	/* Key not found, return NULL */
	return (NULL);
}
