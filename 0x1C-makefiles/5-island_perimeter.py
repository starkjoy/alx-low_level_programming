#!/usr/bin/python3
''' Returns the perimeter of an island represented as grids '''


def island_perimeter(grid):
    '''
    Calculates and returns perimeter

    Parameter:
    grid: accepts positive integer matrix

    Algorithm:
    Count perimeter by adding 4 and subtract 2 for neighbouring cells;
    - Iterated matrix using nested for loops
    - Mapped matrix using row and column length
    - Navigated matrix using square bracket notations
    '''

    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimter += 4
                if (j > 0 and grid[i][j - 1] == 1):
                    perimeter -= 2
                if (i > 0 and grid[i - 1][j] == 1):
                    perimeter -= 2
    return perimeter
