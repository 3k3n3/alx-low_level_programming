#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the hash table
 *
 * Return: A pointer to the created sorted hash table, or NULL if it fails
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}


/*******************************/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *current_node, *prev_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];
	prev_node = NULL;

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			return (1);
		}
		if (strcmp(current_node->key, key) > 0)
			break;
		prev_node = current_node;
		current_node = current_node->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = current_node;

	if (prev_node == NULL)
		ht->array[index] = new_node;
	else
		prev_node->next = new_node;

	if (current_node == ht->shead)
		ht->shead = new_node;
	if (current_node == NULL)
		ht->stail = new_node;

	if (prev_node != NULL && strcmp(prev_node->key, key) > 0)
	{
		if (prev_node->sprev != NULL)
			prev_node->sprev->snext = new_node;
		new_node->sprev = prev_node->sprev;
		prev_node->sprev = new_node;
		new_node->snext = prev_node;
	}
	else
	{
		if (prev_node != NULL)
			prev_node->snext = new_node;
		new_node->sprev = prev_node;
		new_node->snext = current_node;
	}
	return (1);
}


/*******************************/

/**
 * shash_table_get - Retrieves value associated with key from sorted hash table
 * @ht: The sorted hash table to search in
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL if key not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current_node;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table
 * @ht: The sorted hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current_node;
	int first = 1;
	unsigned long int i;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", current_node->key, current_node->value);
			first = 0;
			current_node = current_node->next;
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order
 * @ht: The sorted hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current_node;
	int first = 1;
	unsigned long int i;

	if (ht == NULL)
		return;

	printf("{");
	for (i = ht->size - 1; i < ht->size; i--)
	{
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", current_node->key, current_node->value);
			first = 0;
			current_node = current_node->next;
		}
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The sorted hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current_node, *next_node;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			next_node = current_node->next;
			free(current_node->key);
			free(current_node->value);
			free(current_node);
			current_node = next_node;
		}
	}

	free(ht->array);
	free(ht);
}
