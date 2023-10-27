#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array using
 * advanced binary search.
 * @array: Pointer to the first element of the array to search
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: The index where value is located or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (help_binary(array, value, 0, size - 1));
}

/**
 * help_binary - Searches for a value in an array of integers using recursion
 * @array: Array to search the value in
 * @value: Value to look for
 * @lo: Index of the low bound
 * @hi: Index of the high bound
 * Return: The index of the found value, or -1 if not found
 */
int help_binary(int *array, int value, size_t lo, size_t hi)
{
	size_t mid;

	array_print(array, lo, hi);
	if (hi == lo && array[lo] != value)
		return (-1);

	mid = ((hi - lo) / 2) + lo;
	if (array[mid] == value)
		return (mid);
	if (array[mid] < value)
		return (help_binary(array, value, mid + 1, hi));
	if (array[mid] > value)
		return (help_binary(array, value, lo, mid - 1));
	return (-1);
}

/**
 * array_print - Prints an array
 * @array: Array to print
 * @lo: Index of the low bound
 * @hi: Index of the high bound
 */
void array_print(int *array, size_t lo, size_t hi)
{
	size_t i;

	printf("Searching in array: ");
	for (i = lo; i <= hi; i++)
	{
		printf("%d", array[i]);
		if (i < hi)
			printf(", ");
	}
	printf("\n");
}
