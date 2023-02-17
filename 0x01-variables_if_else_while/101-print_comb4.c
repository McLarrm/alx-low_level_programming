#include <stdio.h>

/**
 * main - Programme that prints all combination of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, c, d;

	for (n = '0'; n < '9'; n++)
	{
	
	for (c = n + 1; c <= '9'; c++)
	{

	for (d = c + 1; d <= '9'; d++)
	{
	if ((c != n) != d)
	{
	putchar(n);
	putchar(c);
	putchar(d);
	if (c == '7' && d == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');

	return (0);
}
