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
int i;
int j;
i = 0;
char *p, *tmp;
if (!s1 || !s2)
return (NULL);
while (s1[i] != '\0')
{
i++;
}
p = malloc(sizeof(char));
if (p == NULL)
{
return (NULL);
}
tmp = p;
j = 0;
while (s2[j] != '\0')
{
s1[i] = s2[j];
i++;
j++;
tmp = s1;
}
return (s1);
}
