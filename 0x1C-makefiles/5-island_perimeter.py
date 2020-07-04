#!/usr/bin/python3
"""
function island perimeter
"""


def island_perimeter(grid):
    """
        function that returns the perimeter of the island described in grid
        0 represents a water zone
        1 represents a column zone
        0 represents a water zone
        1 represents a column zone
        grid = [[0, 0, 0, 0, 0, 0],
                [0, 1, 0, 0, 0, 0],
                [0, 1, 0, 0, 0, 0],
                [0, 1, 1, 1, 0, 0],
                [0, 0, 0, 0, 0, 0]]
    """

    agua = 0
    tierra = 1
    perimeter = 0
    "recorremos hacia abajo"
    for y, row in enumerate(grid):
        "recorremos hacia la derecha"
        for x, column in enumerate(row):
            "Checkear solo cuando sea tierra"
            if column == tierra:
                "sumamos arriba"
                if (y == 0 or grid[y - 1][x] == agua):
                    perimeter += 1
                "sumamos a la abajo"
                if (y + 1 == len(grid) or grid[y + 1][x] == agua):
                    perimeter += 1
                "sumamos a la derecha"
                if (x + 1 == len(row) or grid[y][x + 1] == agua):
                    perimeter += 1
                "sumamos a la izquierda"
                if (x == 0 or grid[y][x - 1] == agua):
                    perimeter += 1
    return(perimeter)
