#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 * @width: Width of the integer
 * @height: Height of an integer
 * Return: NULL if height or width is 0
 */
int **alloc_grid(int width, int height)
{
	int **dmsn, i, s;

	if (width <= 0 || height <= 0)
		return (NULL);
	dmsn = malloc(height * sizeof(int *));
	if (dmsn == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		dmsn[i] = malloc(width * sizeof(int));
		if (dmsn[i] == NULL)
		{
			while (i >= 0)
				free(dmsn[i--]);
			free(dmsn);
			return (NULL);
		}
		for (s = 0; s < width; s++)
			dmsn[i][s] = 0;
	}
	return (dmsn);
}
