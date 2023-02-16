#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of char: %zu byte(s)\n", sizeof(char));
	printf("size of short: %zu byte(s)\n", sizeof(short));
	printf("size of int is: %zu byte(s)\n", sizeof(int));
	printf("size of long is: %zu byte(s)\n", sizeof(long));

	return (0);
}
