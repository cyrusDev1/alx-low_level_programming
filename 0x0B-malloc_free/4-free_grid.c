#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: first parma
 * @height: second param
 * Return: no return
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
