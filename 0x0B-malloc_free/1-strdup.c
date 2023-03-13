#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space memory
 * @str: String
 * Return: Function to pointer, else NULL if memory is insufficient
 */
char *_strdup(char *str)
{
	int size = 0;
	char *pointer, *ret;

	if (!str)
		return (NULL);
	pointer = str;
	while (*pointer++)
		size++;
	ret = malloc(size + 1);
	if (!ret)
		return (NULL);
	pointer = ret;
	while (*str)
		*pointer++ = *str++;
	*pointer = 0;
	return (ret);
}
