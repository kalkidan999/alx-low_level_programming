#include "holberton.h"
/**
*_strcat - change value using
*
*@dest: stores the input
*@src: integer
*Return: int
*/
char *_strcat(char *dest, char *src)
{
int i, j, c = 0, d = 0;
i = 0;
int *p;
while (dest[c])
{
c++;
}
  while (src[d])
{
d++;
}
for (i = 0; i < c; i++);
  
  	for (j = 0; i < d; j++, i++)
  	{
  		src[i] = dest[j];
  	}
   	dest[i] = '\0';
  	return (0);
}
