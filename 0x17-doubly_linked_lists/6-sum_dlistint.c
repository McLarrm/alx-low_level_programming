#include "lists.h"

/**
 * sum_dlistint - Sums a dlistint list
 * @head: Head of list
 * Return: Sum of list elements. 0 if no list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
