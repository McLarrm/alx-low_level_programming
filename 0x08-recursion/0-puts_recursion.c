#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Printing a string followed by a new line
 * @s: String
 * Retun: 0
 */
void _puts_recursion(char *s);
{
	if (*s == 0)
	{
		puts();
		return;
	}
	puts("*s");
	_puts_recursion(s + 1);
}
