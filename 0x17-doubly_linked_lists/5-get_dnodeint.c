#include "lists.h"

/**
 * get_dnodeint_at_index - Returns dlistint node at index
 * @head: Head of list
 * @index: Index of node
 * Return: node address, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;

	while (ptr != NULL && index--)
		ptr = ptr->next;
	return (ptr);
}
