#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2d grid
 * @grid: a selected 2d grid
 * @height: height dimension of the grid
 * Description: frees memory of every grid
 * Return: no return
 *
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
