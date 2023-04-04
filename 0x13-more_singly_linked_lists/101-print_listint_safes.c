#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * is_node_in_list - Checks if a node is in a linked list
 * @head: Pointer to the head of the linked list
 * @node: Pointer to the node
 * Return: 1 if node is in the list, 0 otherwise
 */
int is_node_in_list(const listint_t *head, const listint_t *node)
{
	const listint_t *current = head;
	while (current != NULL)
	{
		if (current == node)
			return (1);
		current = current->next;
	}
	return (0);
}
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
