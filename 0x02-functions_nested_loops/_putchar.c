#include <unistd.h>

/**
 * _putchar - Programme that writes the c charater to stdout
 * @c: The character to print
 * Return: On Succes 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
