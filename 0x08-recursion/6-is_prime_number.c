#include "main.h"
#include <stdio.h>

/**
 * prime_finder - Returning the input of an prime number
 * @n: Number
 * @x: Number
 * Return: 1
 */
int prime_finder(int n, int x)
{
	int p;

	if (n == x)
	{
		return (1);
		if (!(n % x))
			return (0);
	}
	p = prime_finder(n, x + 1);
}
/**
 * is_prime_number - Returning the input of a prime number
 * @n: Number
 * Return: 1
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_fider(n, 2));
}
