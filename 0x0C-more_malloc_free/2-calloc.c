#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - mallocs assigned memory and sets to zero
 *
 * @nmemb: number of memory spaces
 * @size: size of nmemb
 * Return: returns pointer to allocated space, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
void *p;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
for (i = 0; i != size; i++)
*(p + (size * i)) = 0;
return (p);
}
