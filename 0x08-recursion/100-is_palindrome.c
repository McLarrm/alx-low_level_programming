#include "main.h"

/**
 * _strlen_recursion - Returning 1 to a string if palindromed
 * @s: String
 * Return: 1
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * palindrome_finder - Returning 1 to a string if palindromed
 * @s: String
 * @n: Number
 * Return: 1
 */
int palindrome_finder(char *s, int n)
{
	if (n < 1)
		return (1);
	if (*s == *(s + n))
		return (palindrome_finder(s + 1, n - 2));
	return (0);
}
/**
 * is_palindrome - Returning 1 to a string if palindromed
 * @s: String
 * Return: 1
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (palindrome_finder(s, len - 1));
}
