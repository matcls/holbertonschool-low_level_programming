#!/usr/bin/python3
"""Get the perimeter of an island."""


def island_perimeter(grid):
    """Return the perimeter of the island described in grid.

    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]

    Grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height do not exceed 100
    Grid is completely surrounded by water, and there is one island.
    The island does not have "lakes".
    """
    land = 0
    border = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                land += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    border += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    border += 1
    return land * 4 - border * 2
