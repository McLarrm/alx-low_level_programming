#include <stdio.h>

/**
 * main - Programme that prints all possible combinations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, c;

	for (n = '0'; n < '9'; n++)
	{
	for (c = n + 1; c <= '9'; c++)
	{
	if (c != n)
	{
	putchar(n);
	putchar(c);
	if (n == '8' && c == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');

	return (0);
}
