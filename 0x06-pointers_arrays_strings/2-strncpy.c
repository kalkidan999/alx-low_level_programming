#include "holberton.h"
/**
* _strncpy - conc string
*@dest: input
*@src: src
*@n: number of char
*Return: success
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && *(src + i) != '\0'; i++)
{
*(dest + i) = *(src + i);
}
while (i < n)
{
*(dest + i) = '\0';
i++;
}
return (dest);
}
