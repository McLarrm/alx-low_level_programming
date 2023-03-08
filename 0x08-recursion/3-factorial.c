#include "main.h"
#include <stdio.h>

/**
 * factorial - Returning the factorial of a given number
 * @n: Number
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
		return (n * factorial(n - 1));
}

