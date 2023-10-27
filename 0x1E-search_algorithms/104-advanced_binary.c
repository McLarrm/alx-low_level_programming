#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary_recursive - Recursive binary search function
 * @array: Pointer to the first element of the array to search
 * @start: The index to start searching from
 * @end: The index to end the search at
 * @value: The value to search for
 * Return: The index where the value is located or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t start, size_t end, int value)
{
	size_t i;
	size_t mid;

	if (start > end)
		return (-1);

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");

	mid = (start + end) / 2;

	if (array[mid] == value)
	{
		if (mid > 0 && array[mid - 1] == value)
			return (advanced_binary_recursive(array, start, mid, value));
		return (mid);
	}

	if (array[mid] < value)
		return (advanced_binary_recursive(array, mid + 1, end, value));

	return (advanced_binary_recursive(array, start, mid - 1, value));
}

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

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
