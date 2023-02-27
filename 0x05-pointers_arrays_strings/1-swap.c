#include "main.h"

/**
 * swap_int - Swaping the value of two integers
 * @a: swaps for b
 * @b: swap for a
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
