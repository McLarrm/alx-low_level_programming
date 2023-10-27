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
	size_t start, end, step;

	if (!array || size == 0)
		return (-1);
	step = sqrt(size);
	start = 0, end = step;

	while (start < size)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (end < size)
		{
			if (array[start] <= value && value <= array[end])
			{
				printf("Value found between indexes [%lu] and [%lu]\n", start, end);
				break;
			}
		} else
		{
			if (array[start] <= value)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", start, end);
				break;
			}
		}
		start = end;
		end = start + step;
	}

	while (start <= end)
	{
		if (start == size)
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
		start++;
	}

	return (-1);
}
