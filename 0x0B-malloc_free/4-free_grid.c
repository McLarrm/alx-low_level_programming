#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid
 * @grid: Grid previously created
 * @height: Integer
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	if (!grid)
		return;
	if (!grid[0])
		return;
	while (height-- > 0)
		free(grid[height]);
	free(grid);
}
