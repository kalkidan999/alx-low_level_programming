#include "holberton.h"
#include <stdlib.h>
/**
*create_array - change value using
*@size: manipulates size
*@c: stores the input
*Return: memory
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
int *p;
if (size == 0)
return (0);
p = malloc((size) * sizeof(char));
if (p == '\0')
return (0);
for (i = 0; i < size; i++)
{
p[i] = c;
}
return (0);
}
