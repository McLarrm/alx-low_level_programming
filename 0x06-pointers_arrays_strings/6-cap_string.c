#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: String to be modified
 * Return: str
 */
char *cap_string(char *str)
{
	int s, c;
	int trigger;
	chat nots[] = ",;.!?(){}\n\t\" ";

	for (s = 0, trigger = 0; str[s] != '\0'; s++)
	{
	if (str[0] > 96 && str[0] < 123)
	trigger = 1;
	for (c = 0; nots[c] != '\0'; c++)
	{
	if (nots[c] == str[s])
	trigger = 1;
	}
	if (trigger)
	{
	if (str[s] > 96 && str[s] < 123)
	{
	str[s] -= 32;
	trigger = 0;
	}
	else if (str[s] > 64 && str[s] < 91)
	trigger = 0;
	else if (str[s] > 47 && str[s] < 58)
	trigger = 0;
	}
	}
	return (str);
}
