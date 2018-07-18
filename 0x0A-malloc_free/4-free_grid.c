#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid - frees a 2d grid previously created by alloc_grid
  * @grid: address of 2d grid
  * @height: height of the grid
  *
  * Return: void
  */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = height - 1; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
