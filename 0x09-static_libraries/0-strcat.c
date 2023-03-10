#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: String to be modified
 * @src: Second string
 * Return: The result of the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, c;

	while (dest[dlen])
	{
	dlen++;
	}
	for (c = 0; src[c] != 0; c++)
	{
	dest[dlen] = src[c];
	dlen++;
	}
	dest[dlen] = '\0';

	return (dest);
}
