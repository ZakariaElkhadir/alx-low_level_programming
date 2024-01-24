#!/usr/bin/python3
def island_perimeter(grid):
    ver = len([row[0] for row in grid])
    hor = len(grid[0])
    grid = 2*(ver+hor)
    return (grid)
