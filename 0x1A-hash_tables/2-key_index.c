#include "hash_tables.h"

/**
 * key_index - Computes the index of a key in a hash table array.
 * @key: The key to compute the index for.
 * @size: The size of the array of the hash table.
 * Return: The computed index of the key in the hash table array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	hash_value = hash_djb2(key);
	index = hash_value % size;

	return (index);
}
