#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: Pointer to the beginning of the list
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow, *fast;
    size_t count = 0;

    if (head == NULL)
        exit(98);

    slow = head;
    fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            slow = head;
            while (slow != fast)
            {
                printf("[%p] %d\n", (void *)slow, slow->n);
                slow = slow->next;
                fast = fast->next;
            }
            printf("[%p] %d\n", (void *)slow, slow->n);
            exit(98);
        }
        count++;
    }

    printf("[%p] %d\n", (void *)slow, slow->n);
    count++;

    return (count);
}
