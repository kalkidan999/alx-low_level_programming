#include "holberton.h"
/**
*rot13 - change value using
*
*Return: int
*/
char *rot13(char *s)
{
 int i =0;
 
  for(i=0;str && str[i]; ++i) 
  {
    if(str[i] >= 'a' && (str[i]+13) <='z')
    {
      str[i] = str[i]+13;      
    }
  }
return (0);
}
