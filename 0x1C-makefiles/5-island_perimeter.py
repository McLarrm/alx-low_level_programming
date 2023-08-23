#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.
    """
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4
                """ Check left cell """
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2
                """ Check top cell """
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2

    return perimeter
