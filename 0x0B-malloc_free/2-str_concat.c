#include "holberton.h"
#include <stdlib.h>
/**
*str_concat - change value using
*@s1: manipulates char1
*@s2: manipulates char2
*Return: memory
*/
char *str_concat(char *s1, char *s2)
{
char *p, *tmp;
if (!s1 || !s2)
return (NULL);
p = malloc(sizeof(char));
if (p == NULL)
{
return (NULL);
}
tmp = p;
while (*s1)
*tmp++ = *s1++;
while ((*tmp++ = *s2++));
return (p);
}
