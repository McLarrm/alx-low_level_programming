#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Programme that assigns a random number to variable n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (last digit of n is > 5)
	{
		printf("%d and is greater then 5");
	}
	else if (last digits of n is == 0)
	{
		printf("%d and is 0");
	}
	else if (last digit of n is < 6)
	{
		printf("%d and is less that 6 and not 0");
	}
	
	return (0)
}
