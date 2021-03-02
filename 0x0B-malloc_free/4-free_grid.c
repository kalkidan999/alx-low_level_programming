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
int width;
int i;
int h = height;
if (width <= 0 || height <= 0)
return (0);
grid = malloc(height *sizeof(int *));
if (!grid)
return (0);
while (height-- > 0)
{
grid[height] = malloc(width *sizeof(int));
if (!grid[height])
return (0);
}
for (height = 0; height < h; height++)
for (i = 0; i < width; i++)
grid[height][i] = 0;
return (p);
free(p);
return(0);
}
