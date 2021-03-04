#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - allocate a 2d integer grid
 *
 * @min: minimum of grid
 * @max: maximum of grid
 * Return: returns pointer to grid created
 */
int *array_range(int min, int max)
{
int *p, i;
if (min > max)
return (NULL);
p = malloc(((max - min) + 1) * sizeof(int));
if (p == NULL)
return (NULL);
i = 0;
while (min <= max)
p[i++] = min++;
return (p);
}
