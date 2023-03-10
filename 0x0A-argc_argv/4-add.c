#include "main.h"
#include <stdio.h>
#include <stdlin.h>

/**
 * main - Adding positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv)
{
	int i, n, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!(argv[i][0] >= '0' && argv[i][0] <= '9') && argv[i][0] != '-')
		{
			printf("Error\n");
			return (1);
		}
		for (n = 1; argv[i][n] != 0; n++)
		if (argv[i][n] < '0' || argv[i][n] > '9')
		{
			printf("Error\n");
			return (1);
		}
	}
	for (i = 1; i < argc; i++)
	sum += atoi(argv[i]);
	printf("%d\n", sum);

	return (0);
}
