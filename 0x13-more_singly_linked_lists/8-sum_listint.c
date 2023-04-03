#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - Computes the sum of all data
 * @head: Pointer to the head of the linked list
 * Return: The sum of all the data (n) of the linked list, otherwise 0 if empty
 **/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
