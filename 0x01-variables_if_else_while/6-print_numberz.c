#include <stdio.h>

/**
 * main - Printing numbers without char
 *
 * Return Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	putchar(n);
	putchar('\n');

	return (0);
}
