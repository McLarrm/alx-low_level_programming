#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1, size2;
	char *pointer, *ret;

	size1 = 0, size2 = 0;
	pointer = s1;
	if (s1)
		while (*pointer++)
			size1++;
	else
		s1 = "";
	pointer = s2;
	if (s2)
		while (*pointer++)
			size2++;
	else
		s2 = "";
	ret = malloc(size1 + size2 + 1);
	if (!ret)
		return (NULL);
	pointer = ret;
	while (*s1)
		*pointer++ = *s1++;
	while (*s2)
		*pointer++ = *s2++;
	*pointer = 0;
	return (ret);
}
