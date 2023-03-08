#include "main.h"
#include <stdio.h>

/**
 * _print_rev-recursion - Printing a string in reverse
 * @s: String
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_print_rev_recursion(s + 1);
	       _putchar(*s);
	}
}
