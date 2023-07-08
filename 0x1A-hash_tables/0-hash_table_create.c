#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 * Return: A pointer to the newly created hash table, otherwise NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int i = 0;

	/* Allocate memory for the hash table */
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return NULL;

	/* Allocate memory for the array of hash nodes */
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL) {
		free(hash_table);
		return NULL;
	}

	/* Initialize each element of the array to NULL */
	while (i < size) {
		hash_table->array[i] = NULL;
		i++;
	}

	hash_table->size = size;

	return hash_table;
}

