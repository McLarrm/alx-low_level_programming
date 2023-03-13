#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates and array of chars
 * @size: Size of array
 * @c: Array
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	array = malloc(size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
