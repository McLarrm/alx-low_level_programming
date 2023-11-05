include "lists.h"

/**
 * dlistint_len - returns length of a dlistint list
 * @h: Head of list
 * Return: Length of list otherwise, 0 if does not exist
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t len = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		len++;
	}
	return (len);
}
