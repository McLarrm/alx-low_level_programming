#include <stdio.h>

/**
 * main - Prints the name of file it was compiled from
 *
 * Return: 0
 */
int main(void)
{
	printf(__FILE__);
	printf("\n");
	return (0);
}
