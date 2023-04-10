#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary to unsigned int
 * @b: points to a string of characters
 * Return: The converted number, otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);
		result <<= 1;
		if (b[i] == '1')
			result += 1;
		i++;
	}
	return (result);
}
