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
int i;
int *p;
p = malloc((size) * sizeof(char));
for (i = 0; i < size; i++)
{
p[i] = c;
}
return (p);
}
