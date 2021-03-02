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

while(*(++s1));
while(*(s1++) = *(s2++));
    return (0);
}
