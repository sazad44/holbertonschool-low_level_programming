#!/usr/bin/python3
"""5-island-perimeter module"""


def island_perimeter(grid):
    """island_perimeter function"""
    if type(grid) != list or len(grid) == 0:
        return 0
    per = 0
    for i in range(len(grid)):
        if type(grid[i]) != list:
            return 0
        for j in range(len(grid[i])):
            if type(grid[i][j]) != int:
                return 0
            if grid[i][j] == 1:
                per += per_check(grid, i, j)
    return per


def per_check(grid, i, j):
    """per_check function"""
    per = 0
    try:
        if grid[i][j - 1] == 0 or j == 0:
            per += 1
    except IndexError:
        per += 1
    try:
        if grid[i - 1][j] == 0 or i == 0:
            per += 1
    except IndexError:
        per += 1
    try:
        if grid[i + 1][j] == 0:
            per += 1
    except IndexError:
        per += 1
    try:
        if grid[i][j + 1] == 0:
            per += 1
    except IndexError:
        per += 1
    finally:
        return per
