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
while (height-- >= 0)
{
free(*(grid + height));
height--;
}
free(grid);
}
