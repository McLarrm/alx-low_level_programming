#include "function_pointers.h"
#include <stdio.h>
#include <stdlib>

/**
 * print_name - Prints a name
 * @name: The name
 * @f: Function
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
