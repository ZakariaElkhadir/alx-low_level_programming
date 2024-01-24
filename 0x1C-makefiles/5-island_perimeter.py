#!/usr/bin/python3
def island_perimeter(grid):
    ver = len([row[0] for row in grid])#5
    hor = len(grid[0])#6
    grid = 1+(ver+hor)
    return (grid)
