#!/usr/bin/python3

"""A function def island_perimeter(grid): that returns the perimeter of the
island described in grid:"""


def check(i, j, grid):
    """Check if cell is surface or wather or indexError"""
    height = len(grid)
    width = len(grid[0])
    if (i < 0 or j < 0 or i >= height or j >= width or grid[i][j] == 0):
        return 1
    if (grid[i][j] == 1):
        grid[i][j] = "Done"
        return (
            check(i, j + 1, grid) + check(i, j - 1, grid) +
            check(i - 1, j, grid) + check(i + 1, j, grid))
    return 0


def island_perimeter(grid):
    """Returns the perimeter of the island"""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if (grid[i][j] == 1):
                perimeter += check(i, j, grid)
    return (perimeter)
