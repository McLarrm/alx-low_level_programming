#include <stdio.h>

/**
 * main - Programme that prints numbers in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char lwc;

	for (n = '0'; n <= '9'; n++)
	putchar(n);

	for (lwc = 'a'; lwc <= 'f'; lwc++)
	putchar(lwc);
	putchar('\n');

	return (0);
}
