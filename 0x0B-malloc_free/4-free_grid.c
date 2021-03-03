#include "holberton.h"
#include <stdlib.h>
/**
*alloc_grid - change value using
*@width: manipulates width
*@height: manipulates height
*Return: succcess
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
