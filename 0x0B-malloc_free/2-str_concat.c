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
char *p;
if (!s1 || !s2)
return (NULL);
p = malloc(sizeof(char));
if (p == NULL)
{
return (NULL);
}
p = s2;
while (*s1)
{
s1++;
}
while (*s2)
{
*s2 = *s1;
s2++;
s1++;
}
*s2 = '\0';
    return (p);
}
