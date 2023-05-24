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
    peri = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                peri += 4  # Add 4 to the perimeter for each land cell

                # Check neighboring cells
                if i > 0 and grid[i - 1][j] == 1:
                    peri -= 2  # Subtract 2 if the cell above is also land
                if j > 0 and grid[i][j - 1] == 1:
                    peri -= 2  # Subtract 2 if the cell on the left is also land
                if i < rows - 1 and grid[i + 1][j] == 1:
                    peri -= 2  # Subtract 2 if the cell below is also land
                if j < cols - 1 and grid[i][j + 1] == 1:
                    peri -= 2  # Subtract 2 if the cell on the right is also land

    return peri
