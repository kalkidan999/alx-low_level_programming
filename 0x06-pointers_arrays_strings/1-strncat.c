#include "holberton.h"
/**
*_strncat - change value using
*n: integer
*@dest: stores the input
*@src: characteres
*Return: int
*/
char *_strncat(char *dest, char *src, int n)
{
while(*dest)
	{
		Str1++;
	}
	
	while(*src)
	{
		*dest = *src;
		*src++;
		*dest++;
  	}
  	*dest = '\0';
}
