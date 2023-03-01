#include "main.h"

/**
 * reverse_array - Reversing the content of an array of integers
 * @a: integer 1
 * @n: number of element of the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int r;
	int c;

	for (r = 0; r < (n / 2); r++)
	{
	c = a[r];
	a[r] = a[n - r - 1];
	a[n - r - 1] = c;
	}
	return (0);
}
