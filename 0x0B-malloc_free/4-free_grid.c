#include "main.h"

/**
  * free_grid - function to free a 2-dimensional grid
  *
  * @grid: to be free
  * @height: height
  *
  * Return: void
  */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
