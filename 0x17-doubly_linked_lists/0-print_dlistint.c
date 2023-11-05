#include "lists.h"
#include <unistd.h>

/**
 * print_dlistint - Prints a dlistint_t list
 *  @h: Head of list to print
 * Return: Size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t len = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		len++;
	}
	return (len);
}
