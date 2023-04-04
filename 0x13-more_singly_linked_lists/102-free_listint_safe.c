#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Double pointer to the head of the list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;

	if (h == NULL)
		return (0);
	while (*h != NULL)
	{
		count++;
		if (*h <= (*h)->next)
		{
			free(*h);
			break;
		}
		temp = (*h)->next;
		free(*h);
		*h = temp;
	}
	*h = NULL;

	return (count);
}
