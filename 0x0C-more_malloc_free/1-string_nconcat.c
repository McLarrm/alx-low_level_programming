#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two string
 * @s1: String
 * @s2: String
 * @n: Variable
 * Return: Pointer to newly allocated space in memory contaning s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *pointer, *ret;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (len1 = 0, pointer = s1; *pointer; pointer++)
		len1++;
	for (len2 = 0, pointer = s2; *pointer; pointer++)
		len2++;
	if (n > len2)
		n = len2;
	ret = malloc((len1 + n + 1) * sizeof(char));
	if (!ret)
		return (0);
	pointer = ret;
	while (*s1)
		*pointer++ = *s1++;
	int i = 0;
	while (i < n)
	{
		*pointer++ = s2[i++];
	}
	*pointer = 0;
	return (ret);
}
