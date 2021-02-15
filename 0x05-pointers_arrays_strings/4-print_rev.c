#include "holberton.h"
/**
 * print_rev - check the code for Holberton School students.
 * @*s: integer1
 * Return: Always 0.
 */
void print_rev(char *s)
{
 char str;

str = *s;
    char *revPtr;

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

     _putchar(revPtr);
 
}
