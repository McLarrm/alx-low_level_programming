#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sums all arguments
 * @n: Number of argument
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum;
	va_list list;

	va_start(list, n);
	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}
