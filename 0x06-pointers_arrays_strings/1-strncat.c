#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strigns 
 * @dest: Destination string
 * @src: String to be modified
 * @n: New string to be used
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];

	return (dest);
}
