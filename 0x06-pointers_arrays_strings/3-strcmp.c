#include "holberton.h"
/**
* _strcmp -concatinate string
*
*@s1: stores the input
*@s2: source
*Return: comp
*/
int _strcmp(char *s1, char *s2)
{
while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
s1++;
s2++;
}
if (*s1 == *s2)
{
return (0);
}
else
{
return (*s1 - *s2);
}
}
