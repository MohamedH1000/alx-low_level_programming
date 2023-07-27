#!/usr/bin/python3
"""a define for measuring the perimeter of island"""


def island_perimeter(grid):
    """the perimeter of an island
    to be returned
    """
    w = len(grid[0])
    h = len(grid)
    hafa = 0
    sz = 0

    for a in range(h):
        for b in range(w):
            if grid[a][b] == 1:
                sz += 1
                if (b > 0 and grid[a][b - 1] == 1):
                    hafa += 1
                if (a > 0 and grid[a - 1][b] == 1):
                    hafa += 1
    return sz * 4 - hafa * 2
