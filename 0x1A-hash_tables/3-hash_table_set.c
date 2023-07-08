#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates a key-value pair in the hash table.
 * @ht: The hash table to add/update the key-value pair to.
 * @key: The key to add/update.
 * @value: The value associated with the key.
 * Return: 1 if the addition/update is successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *temp = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return 0;

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	/* Check if the key already exists in the hash table */
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return 1;
		}
		temp = temp->next;
	}

	/* Create a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return 0;

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return 0;
	}

	/* Add the new node at the beginning of the list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return 1;
}
