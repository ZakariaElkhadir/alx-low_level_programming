#!/usr/bin/python3
"""doc doc"""
def island_perimeter(grid):
    """island_perimeter"""
    length_row = len(grid)
    length_col = len(grid[0])

    connections = 0
    par = 0
    for x in range(0,length_row):
        for y in range(0, length_col):
            if grid[x][y] == 1:
                par += 4

                if x != 0 and grid[x - 1][y] == 1:
                    connections += 1
                if y != 0 and grid[x][y - 1] == 1:
                    connections += 1
    return par - (connections * 2)

