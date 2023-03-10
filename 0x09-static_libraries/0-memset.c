#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Fills the first n
 * @b: Bytes of the memory area pointed to by s
 * @n: Constant byte
 * Return: THe pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
