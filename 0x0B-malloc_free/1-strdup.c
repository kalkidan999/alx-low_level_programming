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
if (str == NULL)
return (0);
p = malloc(sizeof(char));
if (p == '\0')
return (0);
int i;
for (i = 0; p[i] != '\0'; i++)
	{
p[i] = str[i];
	}
return (p);
}
