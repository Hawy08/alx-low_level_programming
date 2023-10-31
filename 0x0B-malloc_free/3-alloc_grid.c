#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - returns a pointer to a 2 dimen array of integers.
* @width:width
* @height:height
* Return: a poin to a 2 dimen arr of int and NULL on failure
*/

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;
	
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
