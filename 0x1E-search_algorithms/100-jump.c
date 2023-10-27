#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: The index of the value in the array or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;

	if (!array)
		return (-1);

	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev += step;

		if (prev >= size)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev);

	for (; prev >= prev - step; prev--)
	{
		if (array[prev] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
			return (prev);
		}

		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}

	return (-1);
}
