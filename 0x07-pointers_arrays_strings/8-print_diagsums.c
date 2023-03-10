#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Printing sum of two diagonals of square matrix
 * @a: String
 * @size: Input
 * Return Always 0
 */
void print_diagsums(int *a, int size)
{
	int n = 0, sum = 0;

	int *ptr = a;

	for (n = size; n > 0; n--)
	{
		sum += *ptr;
		ptr += size + 1;
	}
	printf("%d, ", sum);
	sum = 0;
	ptr = a + size - 1;
	for (n = size; n > 0; n--)
	{
		sum += *ptr;
		ptr += size - 1;
	}
	printf("%d\n", sum);
}
