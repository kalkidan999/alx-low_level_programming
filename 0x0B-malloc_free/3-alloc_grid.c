#include "holberton.h"
#include <stdlib.h>
/**
*alloc_grid - change value using
*@width: manipulates width
*@height: manipulates height
*Return: succcess
*/
int **alloc_grid(int width, int height)
{
int **p;
int i;
int h = height;
width = 0;
height = 0;
if (width <= 0 || height <= 0)
return (0);
p = malloc(height *sizeof(int *));
if (!p)
return (0);
while (height-- > 0)
{
p[height] = malloc(width *sizeof(int));
if (!p[height])
return (0);
}
for (height = 0; height < h; height++)
for (i = 0; i < width; i++)
p[height][i] = 0;
return (p);
}
