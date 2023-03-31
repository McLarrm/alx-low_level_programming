#include "lists.h"
#include <stdio.h>

/**
 * list_len - Returns the number of elements in a linked list
 * @h: First node
 * Return: 0
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *current_node = h;

	while (current_node != NULL)
	{
		len++;
		current_node = current_node->next;
	}

	return (len);
}
