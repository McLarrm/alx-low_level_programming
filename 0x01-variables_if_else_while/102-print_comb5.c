#include <stdio.h>
/**
 * main - Programme that prints all possible combination
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, c;

	for (n = 0; n <= 98; n++)
	{
	for (c = n + 1; c <= 99; c++)
	{
	putchar((n / 10) + '0');
	putchar((n % 10) + '0');
	putchar(' ');
	putchar((c / 10) + '0');
	putchar((c % 10) + '0');
	if (n == 98 && c == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
