#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number of binary to print
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	if (n == 0)
		_putchar('0');
	while (mask != 0)
	{
		if ((n & mask) == 0 && flag == 1)
			_putchar('0');
		else if ((n & mask) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		mask >>= 1;
	}
}
