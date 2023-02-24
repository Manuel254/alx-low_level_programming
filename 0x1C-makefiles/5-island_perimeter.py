#!/usr/bin/python3
"""This module has a function that accepts a grid
and finds an island (1's) in the grid then calculates perimeter
of the island
"""


def island_perimeter(grid):
    """Perimeter of an island
    Args:
        grid(list): A list of list of integers
    Return:
        Perimeter of island
    """
    visit = set()

    def dfs(i, j):
        if i >= len(grid) or j >= len(grid[0]) or\
                i < 0 or j < 0 or grid[i][j] == 0:
            return 1
        if (i, j) in visit:
            return 0

        visit.add((i, j))
        perimeter = dfs(i, j + 1)
        perimeter += dfs(i + 1, j)
        perimeter += dfs(i, j - 1)
        perimeter += dfs(i - 1, j)
        return perimeter

    rows, cols = len(grid), len(grid[0])

    for row in range(rows):
        for column in range(cols):
            if grid[row][column]:
                return dfs(row, column)
