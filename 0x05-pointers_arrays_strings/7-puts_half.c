#include "main.h"

/**
 * puts_half - Printing half of a string
 * @str: String being printed
 * Return: 0
 */
void puts_half(char *str)
{
	int h = 0;
	int s;

	while (str[h] != '\0')
	{
	h++;
	}
	if (h % 2 == 1)
	{
	s = (h - 1) / 2;
	s += 1;
	}
	else
	{
	s = h / 2;
	}
	for (; s < h; s++)
	{
	_putchar(str[s]);
	}
	_putchar('\n');
}
