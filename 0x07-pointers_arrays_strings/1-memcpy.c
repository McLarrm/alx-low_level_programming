#include "main.h"

/**
 * _memcpy - Copying memory area
 * @dest: Memory area
 * @src: Bytes
 * @n: Function
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
