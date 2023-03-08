#include "main.h"
#include <stdio.h>

/**
 * factorial - Returning the factorial of a given number
 * @n: Number
 * Return: 0
 */
int factorial(int n)
{
	int gvn;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	gvn = n * factorial(n - 1);
	return (gvn);
}
