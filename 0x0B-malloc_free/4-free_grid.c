#include "main.h"
#include <stdlib.h>
/**
* free_grid - free the memory space
* @grid: grid to be freed
* @height: height of arr
* Return: if the grid is NULL or height is 0
*/

void free_grid(int **grid, int height)
{
	int i;
	
	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
