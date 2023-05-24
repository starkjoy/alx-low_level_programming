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
    
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0
    for i in range(1, rows - 1):
        for j in range(1, cols - 1):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0:
                    perimeter += 1
                if grid[i + 1][j] == 0:
                    perimeter += 1
                if grid[i][j - 1] == 0:
                    perimeter += 1
                if grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
