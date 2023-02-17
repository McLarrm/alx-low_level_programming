#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Programming code that assigns a random number to variable n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negativee\n", n);
	}

	return (0);
}
