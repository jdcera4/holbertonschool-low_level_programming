#!/usr/bin/python3
""" grid """


def island_perimeter(grid):
    """ perimeter """
    perimeter = 0

    for row in range(len(grid)):
        """ for row """
        for column in range(len(grid[row])):
            """ for column """
            if grid[row][column] == 1:
                if row - 1 < 0 or grid[row - 1][column] == 0:
                    perimeter += 1
                if column - 1 < 0 or grid[row][column - 1] == 0:
                    perimeter += 1
                if column + 1 >= len(grid[row]) or grid[row][column + 1] == 0:
                    perimeter += 1
                if row + 1 >= len(grid) or grid[row + 1][column] == 0:
                    perimeter += 1
    return perimeter
