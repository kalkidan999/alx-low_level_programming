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
char *p;
if (!str)
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
j = 0;
while (s2[j] != '\0')
{
s1[i] = s2[j];
i++;
j++;
}
return (s1);
}
