#include "main.h"

/**
 * leet - Encoding a string into 1337
 * @str: String
 * Return: if seperator return 1. Otherwise return 0;
 */
char *leet(char *str)
{
	int count = 0, l = 0;
	char *letters = "aeotlAEOTL";
	char *nums = "4307143071";
	
	while (str[count] != '\0')
	{
	l = 0;
	while (letters[l] != '\0')
	{
	if (str[count] == letters[l])
	str[count] = nums[l];
	l++;
	}
	count++;
	}

	return (str);
}
