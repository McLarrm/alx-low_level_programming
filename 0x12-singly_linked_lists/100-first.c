#include <stdio.h>

/**
 * turtle - Prints before main
 * Return: Noting
 */
void __attribute__ ((constructor)) turtle()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
