#include "holberton.h"
/**
*_strcat - change value using
*
*@dest: stores the input
*@src: characteres
*Return: int
*/
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
while (dest[i])
{
while (src[j])
{
dest[i] = src[j];
j++;
}
i++;
}
dest[i] = '\0';
return (dest);
}
