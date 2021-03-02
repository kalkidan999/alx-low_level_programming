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
return (NULL);
while(*(str + j))
{
j++;
}
p = malloc(sizeof(char));
if (p == NULL)
{
return (NULL);
}
for (i = 0; i <= j; i++)
{
str[i] = p[i];
}
return (str);
}
