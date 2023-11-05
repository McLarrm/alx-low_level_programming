#include "lists.h"

/**
 * free_dlistint - Frees a dlistint list
 * @head: Head of list
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
