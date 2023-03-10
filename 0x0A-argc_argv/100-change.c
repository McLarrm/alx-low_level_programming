#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -Printing the minimum number of a coin to make change
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cent, coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	while (cent >= 25)
	{
		coin++;
		cent -= 25;
	}
	while (cent >= 10)
	{
		coin++;
		cent -= 10;
	}
	if (cent >= 5)
	{
		coin++;
		cent -=5;
	}
	while (cent >= 2)
	{
		coin++;
		cent -= 2;
	}
	if (cent == 1)
		coin++;
	printf("%d\n", coins);
	return (0);
}
