#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * @s: character
 * @accept: characcter
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
int count = 0;
while(*s == *accept)
{
   while (*accept != '\0') 
   {
      count++;
      accept++;
   }
}
   return (count);
}
