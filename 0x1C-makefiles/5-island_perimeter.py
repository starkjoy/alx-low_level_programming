#!/usr/bin/python3
''' Returns the perimeter of an island represented as grids '''

def island_perimeter(grid):
    '''
    Calculates and returns perimeter

    Parameter:
    grid: accepts positive integer matrix

    Algorithm:
    - Iterated matrix using nested for loops
    - Mapped matrix using row and column length
    - Navigated matrix using square bracket notations
    '''

    pmtr = 0
    rows = len(grid)
    cols = len(grid[0])

    for ri in range(rows):
        for ci in range(cols):
            if grid[ri][ci] == 1:
                if grid[ri - 1][ci] == 0:
                    pmtr += 1
                if grid[ri][ci - 1] == 0:
                    pmtr += 1
                if grid[ri + 1][ci] == 0:
                    pmtr += 1
                if grid[ri][ci + 1] == 0:
                    pmtr += 1
    return pmtr
