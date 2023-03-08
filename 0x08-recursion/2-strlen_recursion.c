#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returning the length of a string
 * @s: String
 * Return: strlen
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
