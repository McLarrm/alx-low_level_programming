#include "main.h"

/**
 * print-rev - Printing a string in reverse
 * @s: String that will be printed in reverse
 * Return: 0
 */
void print_rev(char *s)
{
	int r = 0;

	while (s[r] != '\0')
	{
	r++;
	}
	for (r -= 1; r >= 0; r--)
	{
	_putchar(s[r]);
	}
	_putchar('\n');
}
