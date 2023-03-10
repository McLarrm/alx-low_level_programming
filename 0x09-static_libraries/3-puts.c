#include "main.h"
#include <stdio.h>

/**
 * _puts - Printing a string
 * @str: String that will be printed
 * Return: 0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
