#include "main.h"

/**
 * puts2 - Printing every character of a string
 * @str: The first character of the string
 * Return: void
 */
void puts2(char *str)
{
	int a;
	int z = 0;

	while (str[z] != '\0')
	{
	z++;
	}
	for (a = 0; a < z; a += 2)
	{
	_putchar(str[a]);
	}
	_putchar('\n');
}
