#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a linked list
 * @head: Pointer to the first node of the list
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = head, *check;
	size_t count = 0;

	while (tmp != NULL)
	{
		printf("[%p] %d\n", (void *) tmp, tmp->n);
		count++;
		check = tmp;
		tmp = tmp->next;
		if (check <= tmp)
		{
			printf("-> [%p] %d\n", (void *) tmp, tmp->n);
			exit(98);
		}
	}

	return (count);
}
