#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Returning the value of a variable
 * @x: Variable
 * @y: String
 * Return: 1
 */
int _pow_recursion(int x, int y)
{
	int v;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	v = x * _pow_recursion(x, y - 1);
	return (v);
}
