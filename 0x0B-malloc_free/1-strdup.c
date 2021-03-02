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
char *p;
if (!str)
return (NULL);
p = malloc(sizeof(char));
if (p == NULL)
{
return (NULL);
}
for (i = 0; p[i] != '\0'; i++)
{
str[i] = p[i];
}
return (str);
}
