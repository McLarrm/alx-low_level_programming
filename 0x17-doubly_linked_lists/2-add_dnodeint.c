#include "lists.h"

/**
 * add_dnodeint - Adds a node to the beginning of a dlistint list
 * @head: Head of list
 * @n: Value of element to add
 * Return: NULL if fail, otherwise pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	new->prev = NULL;
	*head = new;
	return (new);
}
