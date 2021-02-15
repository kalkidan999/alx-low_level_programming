#include "holberton.h"
#include <stdio.h>
/**
* *_strcpy -change value using the pointer address
*
*@dest: stores the input
*@src: integer
*/
char *_strcpy(char *dest, char *src)
{
while(*src)
{
*dest = *src;        
src++;
dest++;
}    
*dest = '\0';
}
