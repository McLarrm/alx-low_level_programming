#include "main.h"
#include <stdio.h>

/**
 * set_bit - Sets the value of a bit to 1
 * @n: Points to the index
 * @index: Index
 * Return: 1 if successful or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= 1UL << index;
	return (1);
}
