#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: Argument count
 * @ac: Argument vector
 * Return: Pointer to a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int size, i;
	char *pointer, *ret, retpointer;

	size = 0;
	if (ac == 0 || !av)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		pointer = av[i];
		while (*pointer++)
			size++;
	}
	ret = malloc(size + 1 + ac);
	if (!ret)
		return (NULL);
	retpointer = ret;
	for (i = 0; i < ac; i++)
	{
		for (pointer = av[i]; *pointer; pointer++, retpointer++)
		{
			*retpointer = *pointer;
		}
		*retpointer = '\n'
	}
	return (ret);
}
