#!/usr/bin/python3
"""doc doc"""


def island_perimeter(grid):
    """island_perimeter"""
    length_row = len(grid)
    length_col = len(grid[0])
    edges = 0
    size = 0

    connections = 0
    par = 0
    for x in range(length_row):
        for y in range(length_col):
            if grid[x][y] == 1:
                size += 1
                if (y > 0 and grid[x][y - 1] == 1):
                    edges += 1
                if (x > 0 and grid[x - 1][y] == 1):
                    edges += 1

    return size * 4 - edges * 2
