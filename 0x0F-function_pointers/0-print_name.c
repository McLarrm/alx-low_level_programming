#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: The name
 * @f: Function
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		(*f)(name);
}
