#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop_pl - Finds loops in a linked list
 * @head: Pointer to the head of the linked list
 * Return: Address of node
 */
listint_t *find_listint_loop_pl(listint_t *head)
{
	if (head == NULL)
		return (NULL);

	listint_t *slow = head, *fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
		       	while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
/**
 * print_listint_safe - Prints a linked list of integers
 * @head: Pointer to the head of the linked list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	int loop = 1;
	listint_t *loopnode = find_listint_loop_pl((listint_t *) head);

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		len++;
		if (head == loopnode && !loop)
			break;
		if (head == loopnode)
			loop = 0;
		head = head->next;
	}
	if (loopnode != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (len);
}
