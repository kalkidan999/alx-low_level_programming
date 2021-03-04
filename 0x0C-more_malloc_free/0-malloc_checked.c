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
void *p;
p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
