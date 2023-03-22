#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function as a parametre
 * @array: Array
 * @size: Size of the array
 * @action: Pointer to the function
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if ((array != NULL) && (action != NULL) && (size > 0))
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
