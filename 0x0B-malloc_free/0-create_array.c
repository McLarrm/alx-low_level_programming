#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates and array of chars
 * @size: Size of array
 * @c: Array
 * Return: NULL
 */
char *create(unsigned int size, char c)
{
	char *first;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	first = malloc(size);
	if (first == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		first[i] = c;
	return (first);
}
