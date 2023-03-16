#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates and array of integers
 * @min: Minimum number to start at
 * @max: Maximum number to start at
 * Return: NULL
 */
int *array_range(int min, int max)
{
	int size = max - min + 1, *ret, pointer;

	if (min > max)
		return (0);
	ret = malloc(size * sizeof(int));
	if (ret == 0)
		return (0);
	pointer = ret;
	while (size--)
		*pointer++ = max - size;
	return (ret);
}
