#include <unistd.h>

/**
 * main - Programme that prints _putchar
 *
 * Return: On Succes 1.
 * On errr, -1 is returned, and errmo is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
