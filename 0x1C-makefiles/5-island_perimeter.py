#!/usr/bin/python3
"""Defines an island perimeter function"""


def island_perimeter(grid):
    """Returns the perimeter of an island
    The grid represents water by 0 and land by 1
    Args:
        grid(list): List of integers representing an island
    Returns:
        Perimeter of the island defined in grid
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for h in range(height):
        for l in range(width):
            if grid[h][l] == 1:
                size += 1
                if (l > 0 and grid[h][l - 1] == 1):
                    edges += 1
                if (h > 0 and grid[h - 1][l] == 1):
                    edges += 1
    return size * 4 - edges * 2
