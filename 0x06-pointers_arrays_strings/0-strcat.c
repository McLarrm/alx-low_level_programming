#include "main.h"

/**
 * _strcat - Concatenating two strings
 * @dest: One of the strings
 * @src: The other string
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, s;

	while (dest[dlen])
	{
	dlen++;
	}
	for (s = 0; src[s] != 0; s++)
	{
	dest[dlen] = src[s];
	dlen++;
	}
	dest[dlen] = '\0';

	return (dest);
}
