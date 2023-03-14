#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: Argument count
 * @av: Argument vector
 * Return: Pointer to a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int ch, i, n, p;
	char *s;

	ch = 0, i = 0, n = 0, p = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][n])
		{
			ch++;
			n++;
		}
		n = 0;
		i++;
	}
	s = malloc((sizeof(char) * ch) + ac + 1);
	i = 0;
	while (av[i])
	{
		while (av[i][n])
		{
			s[p] = av[i][n];
			p++;
			n++;
		}
		s[p] = '\n';
		n = 0;
		p++;
		i++;
	}
	p++;
	s[p] = '\n';
	return (s);
}
