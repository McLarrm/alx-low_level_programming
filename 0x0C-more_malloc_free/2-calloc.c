#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates a memory for an array
 * @nmemb: Number of memory blocks
 * @size: Size of array
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ret;
	char *pointer;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
		return (0);
	ret = malloc(nmemb * size);
	if (ret == 0)
		return (0);
	for (i = nmemb * size, pointer = ret; i; i--)
		*pointer++ = 0;
	return (ret);
}
