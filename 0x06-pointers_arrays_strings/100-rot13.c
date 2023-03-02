#include "main.h"
/**
 * rot13 - Converting a string using rot13
 * @str: String
 * Return: String conversion
 */
char *rot13(char *str)
{
	int count = 0, s;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[count] != '\0')
	{
	s = 0;
	while (letters[s] != '\0')
	{
	if (str[count] == letters[s])
	{
	str[count] = rot13[s];
	break;
	}
	s++;
	}
	count++;
	}

	return (str);
