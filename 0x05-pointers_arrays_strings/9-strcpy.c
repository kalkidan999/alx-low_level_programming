#include "holberton.h"
/**
*_strcpy - change value using
*
*@dest: stores the input
*@src: integer
*Return: int
*/
char *_strcpy(char *dest, char *src)
{
int index = 0;
while (src[index])
{
dest[index] = src[index];
index++;
}
dest[index++] = '\0';
return (dest);
}
