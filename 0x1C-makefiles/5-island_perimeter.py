#!/usr/bin/python3
""" shebang line - defines where the interpreter is located """


def island_perimeter(grid):
    """
    function that returns the perimeter of the island
    described in grid.  Grid is a list of list of integers.
    """
    zone = 0
    """ 0 represents a water zone.  1 represents a land zone """
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i < len(grid) - 1 and grid[i + 1][j]:
                    zone += 1
                if i > 0 and grid[i - 1][j]:
                    zone += 1
                if j < len(grid[i]) - 1 and grid[i][j + 1]:
                    zone += 1
                if j > 0 and grid[i][j - 1]:
                    zone += 1
                zone -= 4
    zone = zone * - 1
    return zone
