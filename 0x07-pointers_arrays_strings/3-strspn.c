#include "main.h"

/**
 * _strspn - Function that gets the length of prefix
 * @s: Input
 * @accept: Substring
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value, check;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	check = 0;
	for (n = 0; accept[n] != '\0'; n++)
	{
	if (accept[n] == s[i])
	{
	value++;
	check = 1;
	}
	}
	if (check == 0)
	}
}#include "main.h"

/**
 * _strspn - Function that gets the length of prefix
 * @s: Input
 * @accept: Substring
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value, check;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	check = 0;
	for (n = 0; accept[n] != '\0'; n++)
	{
	if (accept[n] == s[i])
	{
	value++;
	check = 1;
	}
	}
	if (check == 0)
	}
}#include "main.h"

/**
 * _strspn - Function that gets the length of prefix
 * @s: Input
 * @accept: Substring
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
			return (n);
		}
		s++;
	}

	return (n);
}
