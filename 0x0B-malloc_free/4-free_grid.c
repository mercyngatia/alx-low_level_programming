#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees the 2D grid by alloc_grid
 * @grid: douple pointer 3d grid
 * @height: height of grid
 */

void free__grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}