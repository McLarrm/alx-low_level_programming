#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adding positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv)
{
	int i;
	unsigned int n, sum = 0;
	char *a;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			a = argv[i];
			for (n = 0; n < strlen(a); n++)
			{
				if (a[n] < 48 || a[n] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(a);
			a++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
