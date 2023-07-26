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

    for hei in range(height):
        for wid in range(width):
            if grid[hei][wid] == 1:
                size += 1
                if (wid > 0 and grid[hei][wid - 1] == 1):
                    edges += 1
                if (hei > 0 and grid[hei - 1][wid] == 1):
                    edges += 1
    return size * 4 - edges * 2
