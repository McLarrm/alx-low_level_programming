#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a linked list.
 * @head: Pointer to the first element of the list.
 * @index: Index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *prev_node;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	current_node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	prev_node = *head;
	for (i = 0; i < index; i++)
	{
		if (current_node->next == NULL)
			return (-1);

		prev_node = current_node;
		current_node = current_node->next;
	}

	prev_node->next = current_node->next;
	free(current_node);

	return (1);
}
