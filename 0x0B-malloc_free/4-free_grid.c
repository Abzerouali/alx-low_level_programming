#include "main.h"
#include <stdlib.h>

/**
*free_grid - frees a 2 dimensional grid previously created
*@grid: var
*@height: var
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
