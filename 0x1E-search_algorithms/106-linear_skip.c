#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list
 * @value: The value to search for
 * Return: Pointer to the first node where the value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current = list, *prev = NULL;

	if (list == NULL)
		return (NULL);

	while (current != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n >= value)
		{
			if (current->n == value)
				return (current);
			printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);
			while (prev != NULL && prev->index <= current->index)
			{
				printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
				if (prev->n == value)
					return (prev);
				prev = prev->next;
			}
			break;
		}
		prev = current;
		current = current->express;
	}

	return (NULL);
}
