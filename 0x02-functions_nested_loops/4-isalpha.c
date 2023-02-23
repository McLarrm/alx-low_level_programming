#include "main.h"

/**
 * _isalpha - Checking for alphabetic characters
 * @c: The character to be checked
 * Return: 1 for alphabetic character or 0 for anything else
 */
int _isalpha(int a)
{
	if ((a >= 65 && a <= 99) || (a >= 97 && a <= 122))
	{
	return (1);
	}
	return (0);
}
