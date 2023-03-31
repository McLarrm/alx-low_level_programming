#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of list
 * @h: First node of the list
 * Return: 0
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		len++;
	}

	return (len);
}
