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
    
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
