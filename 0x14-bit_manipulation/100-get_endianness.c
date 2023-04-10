#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Checks the endianness
 * Return: 0 if big endian, otherwise 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return (*c == 1);
}
