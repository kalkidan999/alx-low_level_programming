#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* malloc_checked - crete memory allocation
* @b: int
*Return: pointer
*/
void *malloc_checked(unsigned int b)
{
int *p;
unsigned int i;
if (b < 0)
{
return (NULL);
}
p = malloc((b) * sizeof(char));
if (p == NULL)
return (98);
for (i = 0; i < b; i++)
{
p[i] = b;
}
return (p);
}
