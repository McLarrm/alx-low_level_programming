#include "main.h"

/**
 * print_array - Printing elements of an array of integers
 * @a: Element to be printed
 * @n: The number of element of arrays to be printed
 * Return: Result of the array of elements followed by a new line
 */
void print_array(int *a, int n)
{
	int arr;

	for (arr = 0; arr < n; arr++)
	{
	printf("%d", a[arr]);
	if (arr != (n -1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
