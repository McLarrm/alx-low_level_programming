#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Print strings argument
 * separator: Separator
 * @n: Number of arguments
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sep = 0, *ptr = 0;
	unsigned int i = 0;
	va_list list;

	if ((separator == NULL) || (*separator == 0))
		sep = "";
	else
		sep = (char *) separator;
	va_start(list, n);
	if (n > 0)
		printf("%s", va_arg(list, char *));
	for (i = 1; i < n; i++)
	{
		ptr = va_arg(list, char*);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%s%s", sep, ptr);
	}
	printf("\n");
	va_end(list);
}
