#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * @head: Pointer to the head of the list
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
