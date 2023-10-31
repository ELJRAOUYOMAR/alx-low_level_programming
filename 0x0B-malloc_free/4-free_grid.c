#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D array
 * @grid: the 2D grid to be freed
 * @height: the height dimension of the grid
 *
 * Description: Frees the memory allocated for the grid.
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
    int i;

    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }
    free(grid);
}

