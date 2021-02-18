#include "holberton.h"
/**
* _strncat - conc string
*
*@dest:  input
*@src: output
*@n: number of characters
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
j = 0;
while (dest[i] != '\0')
{
i++;
}
while (j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
