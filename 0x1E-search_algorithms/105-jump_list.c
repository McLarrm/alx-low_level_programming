#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list using Jump search.
 * @list: Pointer to the head of the list to search in.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 * Return: A pointer to the first node where the value is located, or NULL if not found.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, i;
	listint_t *prev, *current;

	if (!list)
		return (NULL);

	jump = sqrt(size);
	prev = list;
	current = list;

	while (current && current->index < size && current->n < value)
	{
		prev = current;
		for (i = 0; i < jump && current->next; i++)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

		if (current->n >= value)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

	while (prev != NULL && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
