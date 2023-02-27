#include <stdio.h>
#include <math.h>

/**
 * maint - Printing the largest prime factor of a number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long p, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (p = 1; p <= square; p++)
	{
	if (number % p == 0)
	{
	maxf = number / p;
	}
	}
	printf("%ld\n", maxf);

	return (0);
}
