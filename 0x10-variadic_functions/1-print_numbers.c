#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints integer argument with seperator
 * @seperator: Seperator
 * @n: Number of arguments
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *sep = 0;
	unsigned int i = 0;
	va_list list;

	if ((separator == NULL) || (*separator == 0))
		sep = "";
	else
		sep = (char *) separator;
	va_start(list, n);
	if (n > 0)
		printf("%d", va_arg(list, int));
	for (i = 1; i < n; i++)
		printf("%d", sep, va_arg(list, int));
	printf("\n");
	va_end(list);
}
