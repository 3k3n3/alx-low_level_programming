def island_perimeter(grid):
    rows = 0
    per = 0
    for row in grid:
        rows += 1
    if rows == 0:
        return 0
    else:
        cols = len(grid[rows - 1])

    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Check top side
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                # Check bottom side
                if i == rows - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                # Check left side
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                # Check right side
                if j == cols - 1 or grid[i][j + 1] == 0:
                    perimeter += 1

    return perimeter
