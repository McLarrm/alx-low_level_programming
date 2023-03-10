#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copying the string pointed to by src
 * @dest: The buffer pointed
 * @src: The string to be pointed
 * Return: The value of the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
	{
	dest[c] = src[c];
	}
	dest[c++] = '\0';

	return (dest);
}
