#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * check_sqrt - Returning the natural square root of anumber
 * @n: Number
 * @y: Number
 * Return: 1
 */
int check_sqrt(int n, int y)
{
	if (y * y > n)
		return (-1);
	if (y * y == n)
		return (y);
	return (check_sqrt(n, y + 1));
}

/**
 * _sqrt_recursion - Returning the natural square root of a number
 * @n: Number
 * Return: 1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (check_sqrt(n, 0));
}
