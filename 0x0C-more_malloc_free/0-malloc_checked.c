#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory
 * @b: Variable
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);
	if (!a)
		exit(98);
	return (a);
}
