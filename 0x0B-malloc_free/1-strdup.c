#include "holberton.h"
#include <stdlib.h>
/**
*_strdup - change value using
*@str: manipulates size
*Return: memory
*/
char *_strdup(char *str)
{
int i;
int j = 0;
char *p;
if (!str)
return (0);
while (*(str + j))
{
j++;
}
p = malloc(sizeof(char));
if (p == 0)
{
return (0);
}
for (i = 0; i <= j; i++)
{
p[i] = str[i];
}
return (p);
}
