#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocate a 2d integer grid
 *
 * @nmemb: block of memory
 * @size: size of grid
 * Return: returns pointer to grid created
 */
void *_calloc(unsigned int nmemb, unsigned int size)
unsigned int i;
char *p;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
for (i = 0; i != size; i++)
*(p + (size * i)) = 0;
return (p);
