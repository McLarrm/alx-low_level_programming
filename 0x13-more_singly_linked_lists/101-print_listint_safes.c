#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a linked list of integers
 * @head: Pointer to the head of the linked list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		count++;
		if (head <= head->next)
		{
			printf("-> [%p] %d\n", (void *) head->next, head->next->n);
			break;
		}
		head = head->next;
	}

	if (count == 0)
		exit(98);

	return (count);
}
