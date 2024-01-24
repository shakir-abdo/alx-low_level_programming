#!/usr/bin/python3
"""A Function that calculates the perimeter of an island in a grid"""

def water_num(grid, i, j):
    """Returns the number of water neighbors surrounded the cell in the grid"""

    n = 0

    if i <= 0 or not grid[i - 1][j]:
        n += 1
    if j <= 0 or not grid[i][j - 1]:
        n += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        n += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        n += 1

    return n


def island_perimeter(grid):
    """Returns the perimeter of the island in grid"""

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perimeter += water_num(grid, i, j)

    return perimeter
