#include "function_pointers.h"
#include <stdlib>

/**
 * print_name - Prints name
 * @name: The name
 * @f: Function
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && (f != NULL))
		f(name);
}
