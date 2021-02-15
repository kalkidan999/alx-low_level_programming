#include "holberton.h"
/**
* _strcpy - change value using
*@dest: stores the input
*@src: integer
*/
char _strcpy(char *dest, char *src)
{
while(*src)
{
*dest = *src;        
src++;
dest++;
}    
}
