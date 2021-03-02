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
int *p;
int i;
width = 0;
height = 0;
if (width <= 0 || height <= 0)
return (NULL);
p = malloc(sizeof(int));
if (p == NULL)
{
return (NULL);
}
for (i=0; i < height; ++i)
    {
        p[i] = i*width;
    }
    return (*p);
}
