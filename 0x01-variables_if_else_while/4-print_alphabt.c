#include <stdio.h>

/**
 * main - Programme that prints alphabets except q & e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
	if (low != 'e' &&  low != 'q')
	putchar(ch);
	}
	putchar('\n');

	return (0);
}
