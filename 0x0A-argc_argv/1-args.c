#include "main.h"
#include <stdio.h>

/**
 * main - Programme that prints the number of an args
 * @argv: Argument vector
 * @argc: Argument count
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
