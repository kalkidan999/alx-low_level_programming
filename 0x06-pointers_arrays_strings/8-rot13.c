#include "holberton.h"
/**
*rot13 - change value using
*
*Return: int
*/
char *rot13(char *s)
{
 int i =0;
 
  for(i=0;s && s[i]; ++i) 
  {
    if(s[i] >= 'a' && (s[i]+13) <='z')
    {
      s[i] = s[i]+13;      
    }
  }
return (0);
}
