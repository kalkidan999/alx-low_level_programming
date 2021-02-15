#include "holberton.h"
/**
 * print_rev - check the code for Holberton School students.
 * @*s: integer1
 * Return: Always 0.
 */
void print_rev(char *s)
{
 char str[50];
    char revStr[50];
str = *s;
    char *revPtr = revStr;

    int len = -1;


    while(*s)
  {
      s++;
      len++;
    }

    while (len >= 0)
  {
      s--;
      *revPtr = *s;
      revPtr++;
      --len;
    }

     *revPtr='\0';
     _putchar(revStr);
 
}
