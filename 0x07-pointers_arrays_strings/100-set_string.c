#include "main.h"

/**
 * set_string - Setting the value of a pointer
 * @s: String
 * @to: Pointer
 * Return: 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
